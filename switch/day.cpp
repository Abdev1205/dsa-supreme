#include <iostream>
using namespace std;
int main()
{
  int day;
  cout << "Enter Day" << endl;
  cin >> day;

  switch (day)
  {
  case 1:
    cout << "sunday";
    break;
  case 2:
    cout << "Monday";
    break;
  case 3:
    cout << "Tuesday";
    break;
  case 4:
    cout << "Wednesday";
    break;
  case 5:
    cout << "Thursday";
    break;
  case 6:
    cout << "Friday";
    break;
  case 7:
    cout << "Saturday";
    break;
  default:
    cout << "Enter Correct Day";
    break;
  }
}