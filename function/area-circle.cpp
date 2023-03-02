#include <iostream>
using namespace std;

float findArea(int r){
  float area = 3.14 * (r*r);
  return area;
}
int main() {
  int r;
  cin>>r;
  float area= findArea(r);
  cout<<area;
  return 0;
}