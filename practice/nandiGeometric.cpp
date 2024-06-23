#include <bits/stdc++.h>
using namespace std;

int power(int x){
  return pow(2,x);
}

double solve(int &n,int i,double ans){
  if(i>n){
    return ans;
  }

  double reciprocal = 1.0/power(i);

  ans += reciprocal; 
  return solve(n, ++i, ans); 


}

int main() {
  int n;
  cin>>n;

  double ans=0.0;
  int i=1;
  ans = solve(n,i,ans);
  cout<<"Answer : "<<ans+1<<endl;
  return 0;
}