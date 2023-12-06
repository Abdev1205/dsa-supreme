#include <iostream>
#include <vector>
using namespace std;

// quick sort mainly find pivot element
// pivot element can abe any element but prefered first element
// not place pivot element in correct way
// divide left and right from pivot element
// not check whether left and right are currectly placed or not
// if not place swap them
// time complexity of 0(n);

int partion(vector<int> &arr, int s, int e)
{
  // step 1 choose pivote index and element
  int pivotIndex = s;
  int pivotElement = arr[pivotIndex];

  // find right place for pivot element and place it there
  int count = 0;
  for (int i = s + 1; i <= e; i++)
  {
    if (arr[i] < pivotElement)
    {
      count++;
    }
  }
  // jab mai loop se bahar ayunga tab mre pass pivot ki right position hoga
  int rightIndex = s + count;
  swap(arr[pivotIndex], arr[rightIndex]);
  pivotIndex = rightIndex;

  // step 3 left me chote and right me bade
  int i = s;
  int j = e;
  while (i < pivotIndex && j > pivotIndex)
  {
    while (arr[i] <= pivotElement)
    {
      i++;
    }
    while (arr[j] > pivotElement)
    {
      j++;
    }

    // agar ko misplaced elememnt mil gaya to use hum swap karenge
    if (i < pivotIndex && j > pivotIndex)
    {
      swap(arr[i], arr[j]);
    }
  }
  return pivotIndex;
}

void quickSort(vector<int> &arr, int s, int e)
{
  // base case
  if (s >= e)
  {
    return;
  }
  // find pivot index using partition
  int p = partion(arr, s, e);
  // recursive call
  // left side ka recusion bhaiya sort kar dijiye
  quickSort(arr, s, p - 1);
  // right side ka recursion bhiya sort kar dijiye
  quickSort(arr, p + 1, e);
}

int main()
{
  vector<int> arr = {2, 1, 3, 4, 6, 4, 8, 9, 10, 24};
  int s = 0;
  int e = arr.size() - 1;
  quickSort(arr, s, e);
  for (int i = 0; i <= e; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}