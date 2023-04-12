#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"Enter row "<<endl;
    cin>>row;
    // our main aim to print 
    // * * * * * 
    // * * * *
    // * * * 
    // * * 
    // *
    // according to question we can find that no of stars decerase as the row increses
    // as we have 5 row and 5 colums
    // in 1 first row we have 5 stars where i=0
    // so we can say that we reducing star according i 
    // colums wil star until row -i
    // som test case we will be 
    // row 5 col 5 i =0 so it will print 
    // * * * * * 
    // row 5 col 5 i =1 so it will print 
    // * * * * 
    // row 5 col 5 i =2 so it will print 
    // * * * 
    // row 5 col 5 i =3 so it will print 
    // * * 
    // row 5 col 5 i =4 so it will print 
    // * 
    // our loop wil stop because i<row which mean 4< 5    
    for(int i=0; i<row;i++){
        for(int j =0; j<row-i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}