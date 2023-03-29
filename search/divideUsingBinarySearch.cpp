#include <iostream>
using namespace std;

int divideUsingBinarySearch(int divisor, int dividend)
{
  int start = 0;
  int end = abs(dividend);
  int mid = start + (end - start) / 2;
  int ans;

  while (start <= end)
  {
    if (mid * abs(divisor) == abs(dividend))
    {
      ans = mid;
    }
    if (mid * abs(divisor) <= abs(dividend))
    {
      ans = mid;
      start = mid + 1;
    }
    else
    {
      mid *abs(divisor) > abs(dividend);
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  if ((divisor < 0 && dividend < 0)  || (divisor > 0 && dividend > 0) )
  {
    return ans;
  }
  else
  {
    return -ans;
  }
}

int main()
{
  int divisor, dividend;
  cout << "Enter Divisor" << endl;
  cin >> divisor;
  cout << "Enter Dividend" << endl;
  cin >> dividend;
  int quotient = divideUsingBinarySearch(divisor, dividend);
  if (quotient == -1)
  {
    cout << dividend << " is not divisible " << divisor;
  }
  else
  {
    cout << dividend << " divided by " << divisor << " equals to " << quotient;
  }
}