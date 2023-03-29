#include <iostream>
#include <vector>
using namespace std;

//isme hum har element ko bagal wale element se swap karte karte last me gratest element set karna hota hai
// time complexity iska bhi 0(n*n) hai

//testing github
// commen test

int main() {
  vector<int> arr{2,8,4,1,0,3,6,7,5,9};

  for(int round=1; round<arr.size();round++){
    bool swapped=false;
    for(int i=0;i<round-1;i++){
      if(arr[i]>arr[i+1]){
        swapped=true;
        swap(arr[i],arr[i+1]);
      }
    }
    if(swapped==false){
      break;
    }
  }

  for(int i=0; i<arr.size(); i++){
    cout<<i;
  }
}