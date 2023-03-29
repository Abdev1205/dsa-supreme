#include <iostream>
#include <vector>
using namespace std;
int firstOcc(vector<int> v , int key){
  int start = 0;
  int end = v.size()-1;
  int mid = start + (end-start)/2;
  int ans = -1;

  while(start<=end){
    if(key==v[mid]){
      ans = mid;
      end = mid -1;
    }
    else if(key<v[mid]){
      end = mid-1;
    }
    else if(key>v[mid]){
      start = mid+1;
    }
    mid = start +(end - start)/2;
  }
  return ans;
}
int main() {
  vector<int> v;
  v = {1,2,3,3,3,4,4,4,5,6,7,8,};
  int key;
  cout<<"Enter key  to find"<<endl;
  cin>>key;
  int index= firstOcc(v,key);
  if(index==-1){
    cout<<key<<" Not found";
  }
  else{
    cout<<key<<" found at "<<index<<" index";
  }
  return 0;
}