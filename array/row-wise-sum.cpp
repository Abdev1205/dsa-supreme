#include <iostream>

using namespace std;

void PrintSumWise(int arr[][3], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    int sum = 0;
    for (int j = 0; j < cols; j++)
    {
      sum = sum + arr[i][j];
    }
    cout << "The sum of row is:" << sum << endl;
  }
}

int main()
{
  int arr[3][3];
  int rows = 3;
  int cols = 3;
  cout << "Enter the elements:";

  // pehele row wise input lo
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> arr[i][j];
    }
  }
  // printing row wise
  cout << "Printing row wise " << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  PrintSumWise(arr, rows, cols);
}