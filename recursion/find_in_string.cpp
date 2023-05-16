#include <iostream>
using namespace std;

bool find(string str, int i, int size, char target)
{
  if (i >= size)
  {
    return false;
  }
  if (str[i] == target)
  {
    return true;
  }
  bool ans =find(str, i + 1, size, target);
  return ans;
}

int main()
{
  string str = "Abhay Mishra";
  int size = str.length();
  int i = 0;
  char target = 'r';
  if (find(str, i, size, target))
  {
    cout << "Found" << endl;
  }
  else
  {
    cout << "Not Found" << endl;
  }
}