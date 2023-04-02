#include <iostream>
using namespace std;
char lowerCase(char ch[], int length){
  for(int i=0; i<length; i++){
    ch[i]= ch[i]-'A'+'a';
  }
}
int getLength(char ch[])
{
  int length = 0;
  int i = 0;
  while (ch[i] != '\0')
  {
    length++;
    i++;
  }
  return length;
}
int main() {
  char ch[100];
  cout<<"Enter character to lowercase"<<endl;
  cin.getline(ch,50);
  int length = getLength(ch);
  lowerCase(ch,length);
  cout<<ch;

}