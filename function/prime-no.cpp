#include <iostream>
using namespace std;
string checkPrime(int n){
  for(int i=2; i<n; i++){
    if(n%i==0){
      cout<<n<<" is not a prime no";
      break;
    }
    else{
      cout<<n<<" is a prime no";
      break;
    }
  }
}
int main() {
  int n;
  cin>>n;
  string prime = checkPrime(n);
  return 0;
}