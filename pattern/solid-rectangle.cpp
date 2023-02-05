#include <iostream>
using namespace std;
int main() {
    int row ;
    int col ;
    cout<<"Enter row "<<endl;
    cin>>row;
    cout<<"Enter col "<<endl;
    cin>>col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++){
            cout<<"* ";
        }
        cout << endl;
    }
    
}