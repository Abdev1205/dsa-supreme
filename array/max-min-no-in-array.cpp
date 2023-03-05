#include <iostream>
#include <limits.h>
using namespace std;
int main() {
  int arr[] = {1,3,5,6,7,9,12,-30,13,15,10};
  int size=11;
  int max=INT_MIN;
  int min = INT_MAX;

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