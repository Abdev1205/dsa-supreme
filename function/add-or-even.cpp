#include <iostream>
using namespace std;
void findOddEven (int n){
  switch (n%2)
  {
  case 1 :
    cout<<n<<" is odd numbber"<<endl;
    break;
  
  default:
  cout<<n<<" is even numbber"<<endl;
    break;
  }
}
int main() {
  int n;
  cin>>n;
  findOddEven(n);
  return 0;
}