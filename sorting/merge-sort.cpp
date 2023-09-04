#include <iostream>
#include <vector>
using namespace std;

// merge sort me ham array ko divide kartte jate hai jab tak wo single element na ban jaye
// then wo single element ko sort karke merge karte hai to form 1 array
// it use divide and conquer algorithm to solve the problem

void merge(vector<int> &arr, int s, int e)
{
  int mid = (s + e) / 2;
  int l1 = mid - s + 1;
  int l2 = e - mid;

  int *left = new int[l1];
  int *right = new int[l2];

  int k = s;
  for (int i = 0; i < l1; i++)
  {
    left[i] = arr[k];
    k++;
  }
  k = mid + 1;

  for (int i = 0; i < l2; i++)
  {
    right[i] = arr[k];
    k++;
  }

  // merge code
  int i = 0;
  int j = 0;
  int mainArrayIndex = s;
  while (i < l1 && j < l2)
  {
    if (left[i] < right[j])
    {
      arr[mainArrayIndex] = left[i];
      mainArrayIndex++;
      i++;
    }
    else
    {
      arr[mainArrayIndex] = right[j];
      mainArrayIndex++;
      j++;
    }
  }
  while (i < l1)
  {
    arr[mainArrayIndex] = left[i];
    i++;
    mainArrayIndex++;
  }
  while (j < l2)
  {
    arr[mainArrayIndex] = right[j];
    j++;
    mainArrayIndex++;
  }
  // Free the dynamically allocated memory this is very important to save space
  delete[] left;
  delete[] right;
}

void mergeSort(vector<int> &arr, int s, int e)
{
  if (s >= e)
  {
    return;
  }

  int mid = (s + e) / 2;

  // left side ka recusrsion bhaiya sort dijiye
  mergeSort(arr, s, mid);

  // right side ka recursion bhaiya sort kar dijiye
  mergeSort(arr, mid + 1, e);

  // ab hame chote sorted array ko merge karna hai
  merge(arr, s, e);
}

int main()
{
  vector<int> arr{2, 34, 12, 56, 28, 23, 45, 98, 1, 3, 9};
  int s = 0;
  int e = arr.size() - 1;
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  mergeSort(arr, s, e);
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}