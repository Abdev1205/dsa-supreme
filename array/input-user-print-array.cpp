#include <iostream>
using namespace std;
int main() {
  int n =5;
  int arr[n];
  for(int i =0; i<n; i++){
    cin>>arr[i];
  }
  for(int i=0; i<n; i++){
    cout<<2*arr[i]<<endl;
  }
}