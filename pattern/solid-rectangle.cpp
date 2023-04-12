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
        //above will iterate after below loop
        // so after every below we wil get this type of answer
        // * * * * *
        // this will be continue till our row is less than i
        // thn we will get like this
        // * * * * *
        // * * * * * 
        // * * * * *
        for (int j = 0; j < col; j++){
            cout<<"* ";
        }
        cout << endl;
    }
    
}