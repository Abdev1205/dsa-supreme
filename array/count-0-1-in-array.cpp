#include <iostream>
using namespace std;

int main()
{
  int arr[] = {0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1};
  int size = 16;
  int count0 = 0;
  int count1 = 0;
  // to count 0 and 1s we are using linear search
  // if we found 0 then we are increasing the count of 0 by 1
  // if we found 1 then we are increasing the count of 1 by 1 
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