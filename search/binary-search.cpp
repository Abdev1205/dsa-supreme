#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
  int start = 0;
  int end = size-1;
  int mid = start + (end-start)/2;
  int ans=-1;

  while(start<=end){
    if(arr[mid]==key){
      ans = mid;
      end = mid - 1;
    }
    else if(arr[mid]>key){
      end = mid - 1;
    }
    else if(arr[mid]<key){
      start = mid +1;
    }
    mid = start + (end-start)/2;
  }
  return ans;
}
int main() {
  int arr[]={1,2,3,7,9,5,4,6};
  int size=8;
  int key;
  cout<<"Enter key to find"<<endl;
  cin>>key;
  int index = binarySearch(arr,size,key);
  if(index==-1){
    cout<<key<<" Not found";
  }
  else{
    cout<<key<<" found at "<<index<<" index";
  }
  return 0;
}