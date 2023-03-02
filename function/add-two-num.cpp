#include <iostream>
using namespace std;

int findSum(int a , int b){
  int sum = a+b;
  return sum;
}

int main() {
  int a,b;
  cin>>a>>b;
  int sum = findSum(a,b);
  cout<<sum<<endl;
  return 0;
}