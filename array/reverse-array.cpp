#include <iostream>
using namespace std;
int main() {
  int arr[]={10,20,30,40,50,60,70,80};
  int size =8;
  int start = 0;
  int end = size-1;
  // here we are using 2 pointer approach to reverse an array
  // we will start from 0th index and also from end index 
  // then we will swap start index with end index values
  // then we update start++ and end --
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
  for(int i =0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}