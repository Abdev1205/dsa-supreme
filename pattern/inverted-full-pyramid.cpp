#include <iostream>
using namespace std;
int main() {
    int row,col;
    cout<<"Enter row "<<endl;
    cin>>row;
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k < row-i; k++)
        {
            cout<<"* ";
        }
        for (int r = 0; r < row-i-1; r++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}