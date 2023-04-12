#include <iostream>
using namespace std;
int main() {
    int row,col;
    cout<<"Enter  row "<<endl;
    cin>>row;
    cout<<"Enter col "<<endl;
    cin>>col;
    // our main aim to print 
    //             *     
    //           * * *   
    //         * * * * * 
    //       * * * * * * *
    //     * * * * * * * * * 
    //   * * * * * * * * * * *
    // acording to pattern we can divide this pattern in 3 parts
    // 1 part  would be where we have to print space
    // 2nd part whre we have to print remaining stars
    // 3rd where we have to print stars so make it pyramid such as half pyramid
    for (int i = 0; i < row; i++)
    {
        // this loop will print spaces upto row -i
        for(int j=0; j< row-i; j++){
            cout<<"  ";
        }
        // this loop will print remaing stars to make left pyramid
        for (int k = 0; k < i+1; k++)
        {
            cout<<"* ";
        }
        // this loop will print remianig half pyramid which will complete this pyramid to full pyramid
        for (int l = 0; l < i; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    

}