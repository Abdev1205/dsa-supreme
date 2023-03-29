#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key){
  for(int i=0; i<size; i++){
    if(arr[i]==key){
      return true;
    }
  }
  return false;
}
int main() {
  int arr[]={1,2,3,7,9,5,4,6};
  int size=8;
  int key;
  cout<<"Enter number to find"<<endl;
  cin>>key;
  if(linearSearch(arr,size,key)){
    cout<<key<<" found";
  }
  else{
    cout<<key<<" Not found";
  }
}