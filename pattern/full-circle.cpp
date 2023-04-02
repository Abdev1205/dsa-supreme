#include <iostream>
using namespace std;
int main() {
  int radius;
  cout<<"Enter Radius"<<endl;
  cin>>radius;
  for(int i=0; i<radius; i++){
    for(int j=0; j<radius; j++){
      if(j==radius-i){
        cout<<" *";
      }
      else{
        cout<<" ";
      }
    }
    for(int j=0; j<radius; j++){
      if(){
        cout<<" *";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }



}