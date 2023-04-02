#include <iostream>
#include <string.h>
using namespace std;

int getLength(char ch[]){
    int length = 0;
    int i=0;
    while(ch[i]!='\0'){
      length++;
      i++;
    }
    return length;
}

int main() {
  char ch[100];
  cout<<"Enter your charcter"<<endl;
  cin.getline(ch,50);
  int length = getLength(ch);
  int start=0;
  int end = length-1;
  

  while(start<=end){
    swap(ch[start],ch[end]);
    start++;
    end--;
  }

  for(int i=0; i<length; i++){
    cout<<ch[i];
  }
  
  return 0;
}
