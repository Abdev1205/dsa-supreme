#include <iostream>
using namespace std;
char findGrade(int grade){
  switch(grade/10){
    case 10 : cout<<"S"<<endl; break;
    case 9 : cout<<"S"<<endl; break;
    case 8 : cout<<"A"<<endl; break;
    case 7 : cout<<"B"<<endl; break;
    case 6 : cout<<"C"<<endl; break;
    case 5 : cout<<"D"<<endl; break;
    default : cout<<"F"<<endl; break;
  }
}
int main() {
  int grade;
  cin>>grade;
  cout<<findGrade(grade);
}