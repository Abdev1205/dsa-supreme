#include <bits/stdc++.h>
using namespace std;

void print(deque<int> dq){
  for(auto d:dq){
    cout<<d<<endl;

  }
}

int main() {
  // What is Deque ?
  // --> Deque is Double endded queue 
  // --> cab be used to contract and exapnd from the both the side
  // --> we can push data into front and back and also pop back the data from front and back
  // --> we can import stl <deque> and use it ;
  deque<int> dq;

  dq.push_back(1);
  dq.push_back(2);
  dq.push_back(3);
  dq.push_back(4);
  dq.push_back(5);
  print(dq);

  // we can also use push_front, pop_front , pop_back , front(), back(), empty
  



}