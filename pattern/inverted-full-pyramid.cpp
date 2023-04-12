#include <iostream>
using namespace std;
int main() {
    int row,col;
    cout<<"Enter row "<<endl;
    cin>>row;
    // our mian aim to print 
    //     * * * * * * * * * * * 
    //       * * * * * * * * *
    //         * * * * * * * 
    //           * * * * *
    //             * * * 
    //               *
    // here also we will aplly same formula as we have done in full pyramid
    // 1 part  would be where we have to print space
    // 2nd part whre we have to print remaining stars
    // 3rd where we have to print stars so make it pyramid such as next half pyramid
    for (int i = 0; i < row; i++)
    {
        // this loop will print spaces upto j<i
        for (int j = 0; j < i; j++)
        {
            cout<<"  ";
        }
        // this loop will print remaing stars to make left inverted pyramid
        for (int k = 0; k < row-i; k++)
        {
            cout<<"* ";
        }
        // this loop will print remianig inverted half pyramid which will complete this pyramid to invertd full pyramid
        for (int r = 0; r < row-i-1; r++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}