#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"Enter row "<<endl;
    cin>>row;
    // out main aim to print is 
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // from the figure we can guess our formula that we have to print star according to row increses
    // sp we can apply a formuls that colums will print * until j< row +1 
    // because row start with 0 so we il add 1 to it so tahgt it can print from 1 to row +1
    for(int i = 0; i < row; i++ ){
        for(int j = 0; j < i+1; j++ ){
            cout<<"* ";
        };
        cout<<endl;
}
}