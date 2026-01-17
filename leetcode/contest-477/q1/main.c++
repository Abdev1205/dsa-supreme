#include <bits/stdc++.h>
using namespace std;

pair<int,int> remzerosWithSum(string s1){
        string ans = "";
        int sum = 0;
        for(auto s:s1){
            if(s!='0'){
                sum+=s-'0';
                ans+=s;
            }
        }

        pair<int,int> p;

        p = {stoi(ans),sum};

        return p;
        
    }
    long long sumAndMultiply(int n) {
        string s1 = to_string(n);
        pair nzWithSum = remzerosWithSum(s1);

        return nzWithSum.first * nzWithSum.second;
        
    }
int main() {
  cout<<sumAndMultiply(10203004)<<endl;
  return 0;
}