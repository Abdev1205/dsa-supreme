#include <iostream>
using namespace std;

void printSubsequence(string str, string output, int i)
{
  if (i >= str.length())
  {
    cout << output << endl;
    return;
  }

  // exclude
  printSubsequence(str, output, i + 1);

  // include
  output.push_back(str[i]);
  printSubsequence(str, output, i + 1);
}

int main()
{
  int i = 0;
  string str = "abc";
  string output = "";
  printSubsequence(str, output, i);
}