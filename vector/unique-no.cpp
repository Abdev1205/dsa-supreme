#include <iostream>
#include <vector>
using namespace std;
int unique(vector<int> arr){
  int unique =0;
  for(int i=0; i<arr.size(); i++){
    unique = unique^arr[i];
  }
  return unique;
}
int main() {
  int n;
  cout<<"Enter size of vector";
  cin>>n;
  vector <int> arr(n);
  for(int i=0; i<arr.size(); i++){
    cin>>arr[i];
  }
  int uniqueVal = unique(arr);
  cout<<"unique value :"<<uniqueVal;
}