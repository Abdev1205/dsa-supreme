#include <bits/stdc++.h>
using namespace std;


void findMiddle(stack<int> stack,int mid){
  // base case 
  if(stack.size()==mid){
    cout<<"middle element of the stack is :  "<<stack.top()<<endl;
    return;
  }

  int temp=stack.top();
  stack.pop();
  findMiddle(stack,mid);
  stack.push(temp);
}

int main(){
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  st.push(6);
  st.push(7);

  int mid = st.size()/2 +1;

  findMiddle(st,mid);

  return 0;
}