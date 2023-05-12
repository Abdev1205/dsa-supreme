#include <iostream>
using namespace std;

int factorial(int n){
  //base case
  if(n==1){
    return 1;
  }
  //processing
  int smallProblem=factorial(n-1);
  int bigProblem = n*smallProblem;
  return bigProblem;
}

int main() {
  int n;
  cout<<"Enter no"<<endl;
  cin>>n;
  int ans= factorial(n);
  cout<<ans;
  return 0;
}