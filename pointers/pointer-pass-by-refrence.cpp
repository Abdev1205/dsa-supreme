#include <iostream>
using namespace std;
int addbyone(int &val){
  val=val+1;
  return val;
}
int main() {
  int a=5;
  int* ptr=&a;
  cout<<addbyone(*ptr);
  return 0;
}