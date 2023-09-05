#include <iostream>
using namespace std;

void reverse(string &input, int start, int end)
{
  //! base case
  if (start >= end)
  {
    return;
  }

  //? ek case hum solve karenge baki recursion dekh lega
  swap(input[start], input[end]);

  //^ recursive caaling the fucntion
  reverse(input, start + 1, end - 1);
}

int main()
{
  string input = "Abhay Mishra";
  int start = 0;
  int end = input.size() - 1;
  reverse(input, start, end);
  cout << input;
  return 0;
}