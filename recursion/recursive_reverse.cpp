#include <iostream>
using namespace std;

void numReverse(int n){
  if(n==0){
    return;
  }
  cout<<n;
  numReverse(n-1);
}

int main() {
  int n;
  cout<<"Enter any number"<<endl;
  cin>>n;
  numReverse(n);
  return 0;
}