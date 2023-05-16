#include <iostream>
#include <limits.h>
using namespace std;

void maxy(int arr[], int n, int i, int& max){
  // base case
  if(i>=n){
    return;
  }
  // 1 case solve karna padega
  if(arr[i]>max){
    max = arr[i];
  }
  maxy(arr,n,i+1,max);
  

}

int main() {
  int arr[] = {10,20,12,24,14};
  int n=5;
  int i=0;
  int max = INT_MIN;
  maxy(arr,n,i,max);
  cout<<max;
  
}