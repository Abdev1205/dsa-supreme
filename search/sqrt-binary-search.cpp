#include <iostream>
using namespace std;
int findSqrt(int n){
  int start =  0;
  int end = n;
  int mid = start + (end-start)/2;
  int ans = -1;
  while(start<=end){
    if(mid*mid==n){
      return mid;
    }
    if(mid*mid>n){
      end = mid-1;
    }
    else {
      ans = mid;
      start = mid+1;
    }
    mid = start +(end - start)/2;
  }
  return ans;
}
int main() {
  int n;
  cout<<"Enter no to find sqrt";
  cin>>n;
  int sqrt = findSqrt(n);
  cout<<"Sqare root of "<<n<<" is "<<sqrt;
}