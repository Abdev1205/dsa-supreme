#include <iostream>
#include <vector>
using namespace std;

void printSubarray(vector<int> arr, int start, int end)
{
  //! base condition
  if (end >= arr.size())
  {
    return;
  }

  //? 1 case hum solve karenge baki case recursion solve kar lega
  for (int i = start; i <= end; i++)
  {
    cout << arr[i];
  }
  cout << endl;

  //^ recurive calling
  printSubarray(arr, start, end + 1);

}

int main()
{
  vector<int> arr{1, 2, 3, 4, 5};
  int start = 0;
  int end = 0;
  printSubarray(arr, start, end);
}
