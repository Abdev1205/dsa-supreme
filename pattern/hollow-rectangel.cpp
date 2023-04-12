#include <iostream>
using namespace std;
int main() {
    int row ,col ;
    cout<<"Enter row "<<endl;
    cin>>row;
    cout<<"Enter col "<<endl;
    cin>>col;
    // what our main aim to print 
    // * * * * * *
    // *         *
    // * * * * * *
    for (int i = 0; i < row; i++)
    {
        // in order to print hollow rectnagle 
        // we have to print all star in begiuning of the row and in the end
        // if i==0 and i=row-1 then we will print full star
        if (i==0 || i == row-1)
        {
            // here we will print all star as i ==0 and i = row -1
            for (int j = 0; j < col; j++)
            {
                cout<<"* ";
            }
            
        }
        else
        {
            // if i not the last and begin of the row so will be printing hollow 
            // initillly we print one star in staring of the column
            // we will get output as this 
            // *
            cout<<"* ";
            // after that we wil printig space unitl the last -1 
            // last = row-1 so last -1 = row -2 or j-2
            // after this lop we will get output like this
            // *     
            for(int j = 0; j <col-2; j++ )
            {
                cout<<"  ";
            }
            // ans if aour space prnting is over than we can print our last star to complete our hollow rectangle
            cout<<"* ";
        }
        
        cout<<endl;
        
    }
    
}