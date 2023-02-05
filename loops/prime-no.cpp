#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter n for prime number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (n%i!=0)
        {
            cout<<"prime no "<<i<<endl;
        }
        
        
        
    }
    
}