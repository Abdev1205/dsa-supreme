#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int> &arr, int target)
{
  // base condition
  if (target == 0)
  {
    return 0;
  }

  // base condition
  if (target < 0)
  {
    return INT_MAX;
  }

  int mini = INT_MAX;
  for (int i = 0; i < arr.size(); i++)
  {
    int ans = solve(arr, target - arr[i]);
    if (ans != INT_MAX)
    {
      mini = min(mini, ans + 1);
    }
  }

  return mini;
}

int main()
{
  int target = 13;
  vector<int> arr{1, 2, 5};
  int ans = solve(arr, target);
  cout << ans;
}