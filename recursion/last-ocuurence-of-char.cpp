#include <iostream>
using namespace std;

void lastOcc(string input, char n, int i, int &ans)
{
  // !base case
  if (i < 0)
  {
    return;
  }

  //? 1 case hum solve karenge
  if (input[i] == n)
  {
    ans = i;
    return;
  }
  //^ recursive call kar denge
  lastOcc(input, n, i - 1, ans);
}

int main()
{
  string input = "dddddsfghdtyuydvgj";
  char n = 'd';
  int i = input.size() - 1;
  int ans = -1;
  lastOcc(input, n, i, ans);
  if (ans != -1)
  {
    cout << n << " occurs at " << ans + 1 << " position" << endl;
  }
  else
  {
    cout << n << " does not occur in the given String" << endl;
  }
  // cout << ans;
}