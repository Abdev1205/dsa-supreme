#include <iostream>
using namespace std;

bool palindromeRecursively(string &str, int start, int end)
{
  //! base case
  if (start >= end)
  {
    return true;
  }

  //? 1 case hum solve karenge baki recursion dekh lenge
  if (str[start] != str[end])
  {
    return false;
  }

  //^ recursive calling
  return palindromeRecursively(str, start + 1, end - 1);
}

int main()
{
  string str = "madam";
  int start = 0;
  int end = str.size() - 1;
  bool ans = palindromeRecursively(str, start, end);
  if (ans)
  {
    cout << str << " is palindrome";
  }
  else
  {
    cout << str << " is not palindrome";
  }
}