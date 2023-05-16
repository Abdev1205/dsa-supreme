#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int>& arr, int& n, int i){
  //base case
  if(i==n-1){
    return true;
  }
  // 1 case hame solve karna hai
  if(arr[i+1]<arr[i]){
    return false;
  }
  // baki case recursion solve kar lega
  return checkSorted(arr,n,i+1);
}

int main() {
  vector<int> arr{10,0,30,40,50};
  int n = arr.size();
  int i=0; 
  bool issorted = checkSorted(arr,n,i);
  issorted ? cout<<"Array is sorted" : cout<<"Array is not sorted";
}