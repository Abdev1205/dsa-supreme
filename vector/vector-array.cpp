#include <iostream>
#include <vector>
using namespace std;
int main() {
  cout<<"enter n";
  int n;
  cin>>n;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    cout<<"Enter vector value ";
    int n;
    cin>>n;
    arr.push_back(n);
  }
  
  

  for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }

}