#include <iostream>
using namespace std;

void print(int n){
  if(n == 0){
    return;
  }
  int newVal=n/10;
  print(newVal);
  int digits = n%10;
  cout<<digits<<" ";
}

int main() {
  int n = 123;
  print(n);
}