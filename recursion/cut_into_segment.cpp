#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int> &arr, int target)
{
  if (target == 0)
  {
    return 0;
  }

  if (target < 0)
  {
    return INT_MIN;
  }

  int mini = INT_MIN;
  for (int i = 0; i < arr.size(); i++)
  {
    int ans = solve(arr, target - arr[i]);
    if (ans != INT_MIN)
    {
      mini = max(mini, ans + 1);
    }
  }
  return mini;
}

int main()
{
  int target = 7;
  vector<int> arr{2, 2, 5};
  int ans = solve(arr, target);
  cout << ans;
}