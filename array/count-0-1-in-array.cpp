#include <iostream>
using namespace std;

int main()
{
  int arr[] = {0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1};
  int size = 16;
  int count0 = 0;
  int count1 = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
    {
      count0++;
    }
    if (arr[i] == 1)
    {
      count1++;
    }
  }
  cout<<"Count of 0 = "<<count0<<endl;
  cout<<"Count of 1 = "<<count1<<endl;
}