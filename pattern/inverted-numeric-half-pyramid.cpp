#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"Enter  row "<<endl;
    cin>> row;
    // our main aim to print 
    // 1 2 3 4 5 
    // 1 2 3 4
    // 1 2 3 
    // 1 2
    // 1
    // acording to pattern we can say in first row we have to print no that is j+1
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    
}