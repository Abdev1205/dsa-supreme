#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int key ){
  if(s>e){
    return -1;
  }
  int mid = (s+e)/2;
  if(arr[mid]==key){
    return mid;
  }
  
  if(arr[mid]<key){
    return binarySearch(arr,mid+1,e,key);
  }
  else{
    return binarySearch(arr,s,mid-1,key);
  }
  
  
}

int main() {
  vector<int> arr{10,20,30,40,50,60,70};
  int e = arr.size()-1;
  int s=0;
  int key = 50;
  int ans = binarySearch(arr,s,e,key);
  cout<<ans;
}