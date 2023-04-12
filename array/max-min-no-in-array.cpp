#include <iostream>
#include <limits.h>
using namespace std;
int main() {
  int arr[] = {1,3,5,6,7,9,12,-30,13,15,10};
  int size=11;
  int max = INT_MIN;
  int min = INT_MAX;
  // our aim is to find maximum and minimum no from the array
  // for finding max no we are intializing int max = INT_MIN which lowest integer no 
  // if we found any numaber bigger than in tmax then we update int max with arr[i]
  // for finding min no we intialize int min = INT_MAX which is highest no if the integer
  // if we foutn any no smaller than int min than we update the value of int min to arr[i]
  // that's how we get min and maximum no from the array
  for(int i=0; i<size; i++){
    if(arr[i]>max){
      max=arr[i];
    }
    if(arr[i]<min){
      min=arr[i];
    }
  }
  cout<<"Maximum no in the array = " <<max<<endl;
  cout<<"Minimum no in the array = " <<min<<endl;

}