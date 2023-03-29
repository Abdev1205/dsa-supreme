#include <iostream>
#include <vector>
using namespace std;

int nearestBinarySearch(vector<int> arr,int key){
  int start = 0;
  int end = arr.size()-1;
  int mid = start + (end-start)/2;

  while(start<=end){
    if(arr[mid]==key){
      return mid; 
    }
    if(arr[mid-1]==key){
      return mid-1;
    }
    if(arr[mid+1]==key){
      return mid+1;
    }
    if(arr[mid]<key){
      start= mid+2;
    }
    else{
      end= mid-2;
    }
    mid = start+(end-start)/2;
  }
  return -1;
}


int main() {
  vector<int> arr{10,3,40,20,50,80,70};
  int key;
  cout<<"Enter Key to find"<<endl;
  cin>>key;
  int ans = nearestBinarySearch(arr,key);
  if(ans==-1){
    cout<<key<<" not found";
  }
  else{
    cout<<key<<" found at "<<ans;
  }
  return 0;
}