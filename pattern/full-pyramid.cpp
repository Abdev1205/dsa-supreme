#include <iostream>
using namespace std;
int main() {
    int row,col;
    cout<<"Enter  row "<<endl;
    cin>>row;
    cout<<"Enter col "<<endl;
    cin>>col;

    for (int i = 0; i < row; i++)
    {
        for(int j=0; j< row-i; j++){
            cout<<"  ";
        }
        for (int k = 0; k < i+1; k++)
        {
            cout<<"* ";
        }
        for (int l = 0; l < i; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    

}