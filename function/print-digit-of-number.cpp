#include <iostream>
#include<math.h>
using namespace std;
int getDigit(int n){
  int length = to_string(n).length();
  cout<<length;
  int num = n;
  
  for(int i=1; i<=length; i++){
    int p = pow(10,n-i);
    int digit = num%(1*p);
    cout<<digit;
    num = num <<1;
  }
}
int main() {
  int n;
  cin>>n;
  cout<<getDigit(n);
  return 0;
}

// NOT THE BEST WAY TO TACKLE USE ARRAY 