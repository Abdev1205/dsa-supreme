#include <iostream>
using namespace std;

int printCount(int n){
  for(int i=0; i<=n; i++){
    cout<<i;
  }
}
int main() {
  int n;
  cin>>n;
  int count = printCount(n);
  return 0;
}