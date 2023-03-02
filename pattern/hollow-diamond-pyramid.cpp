#include <iostream>
using namespace std;
int main() {
    int row ;
    cout<<"Enter row "<<endl;
    cin>>row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i-1; j++)
        {
            cout<<" ";
        }
        for (int k=0; k < 2*i+1; k++)
        {
            if(k==0){
                cout<<"*";
            }
            else if(k==2*i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k=0; k < 2*row-2*i-1; k++)
        {
            if(k==0){
                cout<<"*";
            }
            else if(k==2*row-2*i-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
    
}