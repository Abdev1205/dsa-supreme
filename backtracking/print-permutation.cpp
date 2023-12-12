#include <iostream>
using namespace std;

void printPermutation(string &str, int i)
{
  if (i >= str.size())
  {

    cout << str << endl;
    return;
  }

  // 1 case hum solve karnege and baki case recusrion solve kar lega
  // swapping a no based on i and j
  for (int j = i; j < str.size(); j++)
  {
    swap(str[i], str[j]);
    printPermutation(str, i + 1);
    //  using backtackig here which swap again the str to its initial state so that other steps should get exact string str
    swap(str[i], str[j]);
  }
}

int main()
{
  string str;
  cout << "Enter a string: ";
  cin >> str;
  int i = 0;
  cout << "permuation of " + str + " are" << endl;
  printPermutation(str, i);
}