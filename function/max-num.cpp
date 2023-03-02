#include <iostream>
using namespace std;

int findMax(int a, int b, int c){
  if(a>b && a>c){
    return a;
  }
  else if(b>a && b>c){
    return b;
  }
  else {
    return c;
  }
}
int main() {
  int a,b,c;
  cin>>a>>b>>c;
  int max = findMax(a,b,c);
  cout<<max<<endl;
  return 0;
}