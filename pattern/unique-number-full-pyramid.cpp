#include <iostream>
using namespace std;
int main() {
    int row ;
    int count = 1;
    cout<<"Enter row "<<endl;
    cin>>row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i; j++){
            cout<<"  ";
        }
        for (int k = 0; k < i+1; k++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
        
    }
    
}