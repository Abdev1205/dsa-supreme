#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"Enter row "<<endl;
    cin>>row;

    for (int i = 0; i < row; i++)
    {
        for(int j=0; j< row-i-1; j++){
            cout<<" ";
        }
        for (int k = 0; k < i+1; k++)
        {
            cout<<"*";
        }
        for (int l = 0; l < i; l++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < row-i; k++)
        {
            cout<<"*";
        }
        for (int r = 0; r < row-i-1; r++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}