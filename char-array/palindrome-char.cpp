#include <iostream>
using namespace std;
int getLength(char ch[])
{
  int length = 0;
  int i = 0;
  while (ch[i] != '\0')
  {
    length++;
    i++;
  }
  return length;
}

bool checkPalindrome(char ch[], int length)
{
  int start = 0;
  int end = length - 1;
  while (start <= end)
  {
    if(ch[start]==ch[end]){
      start++;
      end--;
    }
    else{
      return false;
    }
  }
  return true;
}

int main()
{
  char ch[100];
  cout << "Enter character to check palindrome" << endl;
  cin.getline(ch, 50);
  int length = getLength(ch);
  if (checkPalindrome(ch, length))
  {
    cout << ch << " is the palindrome";
  }
  else
  {
    cout << ch << " is not the palindrome";
  }
}