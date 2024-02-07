#include <iostream>
using namespace std;

void reverse(string &str, string &ans, int i)
{
  // base case
  if (i < 0)
  {
    return;
  }
  // add the character to answer string
  ans += str[i];
  reverse(str, ans, i - 1);
}

int main()
{
  string str = "Hello world";
  int i = str.size() - 1;
  string ans;
  reverse(str, ans, i);
  cout << ans << endl;
}