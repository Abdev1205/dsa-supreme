#include <iostream>
using namespace std;

char upperCase(char ch[],int length){
  for(int i=0; i<length;i++){
    ch[i]=ch[i] -'a'+'A';
  }
}
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
  cout<<"Enter chracter to uppercase"<<endl;
  cin.getline(ch,50);
  int length = getLength(ch);
  upperCase(ch,length);
  cout<<ch;
  
}