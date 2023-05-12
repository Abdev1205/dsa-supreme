#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> arr1{1,2,3,4,7,8};
  vector<int> arr2{1,2,2,3,8,7,};
  vector<int> arr;
  for(int i=0; i<arr1.size(); i++){
    for(int j=0; j<arr2.size(); j++){
      if(arr1[i]==arr2[j]){
        arr.push_back(arr1[i]);
      }
    }
  }

  for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}