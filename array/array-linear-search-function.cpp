#include <iostream>
using namespace std;

bool find( int arr[] , int key ,int size){
  for(int i = 0; i<size ; i++){
    if(arr[i]==key){
      return true;
    }
  }
  return false;
}

int main() {
  int size=20;
  int arr[size] = {1,3,5,6,7,9,12,13,15};
  cout<<"Enter no to find"<<endl;
  int key;
  cin>>key;
  // this brute approach 
  // Linear Search but its time complexity is o(n) 
  // here we iterate and check that our arr[i] == target or not
  if(find(arr,key , size )){
    cout<<key<<" found";
  }
  else{
    cout<<key<<" Not found";
  }

}