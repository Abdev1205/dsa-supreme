#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  map<string,int> mp;
  vector<string> arr{"Rohan","Mohan","Sohan","DJ"};
  for(int  i=0; i<arr.size(); i++){
    mp[arr[i]]=i;
  }
  map<string,int>::iterator it;
  for(it=mp.begin(); it!=mp.end(); it++){
    cout << it->first << " " << it->second << endl;
  }
}
