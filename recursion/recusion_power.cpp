#include <iostream>
#include <math.h>
using namespace std;

int power(int n){
  if(n==0){
    return 1;
  }
  int ans =  power(n-1) * 2;
  return ans;
}

int main() {
  int n;
  cout<<"Enter any number"<<endl;
  cin>>n; 
  int ans=power(n);
  cout<<"2 power "<<n<<" = "<<ans<<endl;
}