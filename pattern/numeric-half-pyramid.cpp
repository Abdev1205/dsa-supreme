#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"Enter row "<<endl;
    cin>>row;
    // our main aim to print 
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // as accoring to question we can see that 
    // in first row we are printing only 1 which equal to i+1
    // so we can use this formula to print above pattern
    // when i =0
    // 1
    // when i =2
    // 1 
    // 1 2
    // when i =3
    // 1 
    // 1 2
    // 1 2 3
    // and same steps fill be folowed to print out pattern 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
        
    }
    
}