#include <iostream>
#include <vector>
using namespace std;

//selction short me hame pehle koi ek minimum index find karna padta hai 
//us minimum index ko arr[i] se swap karna hai 
// iska time complexity 0(n*n) hai
int main() {
  vector<int> arr{2,5,3,8,6,9,0,1};
  for(int i=0; i<arr.size();i++){
    int minimum =i;
    for(int j=i+1; j<arr.size(); j++ ){
      if(arr[j]<arr[minimum]){
        minimum=j;
        
      }
    }
    swap(arr[i],arr[minimum]);
  }

  for(int i=0; i<arr.size();i++){
    cout<<arr[i];
  }
}