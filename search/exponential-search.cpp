#include <iostream>
#include <vector>
using namespace std;

int exponentialSearch(vector<int> arr, int key)
{
  int ans = -1;
  if (arr[0] == key)
  {
    ans = 0;
    return ans;
  }
  int i = 1;
  while (arr[i] < key)
  {
    i = i * 2;
  }
  int start = i / 2;
  int end = i;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (arr[mid] > key)
    {
      end = mid - 1;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int main()
{
  vector<int> arr{3, 4, 5, 6, 11, 13, 15, 17, 56, 70};
  int key = 56;
  int ans = exponentialSearch(arr, key);
  cout << ans;
}