#include <iostream>
#include <limits.h>
using namespace std;

void findMin(int arr[], int n, int i, int& min){
  if(i>=n){
    return;
  }
  if(arr[i]<min){
    min = arr[i];
  }
  findMin(arr,n,i+1,min);
}

int main() {
  int arr[] ={10,23,12,24,37};
  int n=5;
  int i=0;
  int min=INT_MAX;
  findMin(arr,n,i,min);
  cout<<min;
}