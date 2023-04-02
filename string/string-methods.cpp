#include <iostream>
using namespace std;
int main() {
  string name="Abhay Mishra";
  string key = "Abhay";
  if(name.find(key)==1){
    cout<<"found";
  }
  else{
    cout<<"not found";
  }
  
}