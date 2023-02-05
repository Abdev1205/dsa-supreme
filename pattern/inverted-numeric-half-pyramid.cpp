#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"Enter  row "<<endl;
    cin>> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    
}