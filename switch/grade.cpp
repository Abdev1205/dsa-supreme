#include <iostream>
using namespace std;
int main() {
  int marks;
  cout<<"Enter Marks"<<endl;
  cin>>marks;

  switch (marks)
  {
  case 95:
    cout<<"S Grade";
    cout<<marks;
    break;
  
  case 90:
    cout<<"A Grade";
    break;
  
  case 80:
    cout<<"B Grade";
    break;
  
  case 70:
    cout<<"C Grade";
    break;
  
  case 60:
    cout<<"D Grade";
    break;
  
  case 40:
    cout<<"F Grade";
    break;
  
  default:
    cout<<"Enter Correct Marks";
    break;
  }
}