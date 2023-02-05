#include <iostream>
using namespace std;
int main() {
    int n = 10;
    int sum = 0;
    cout<<"Enter a number to get its sum " << endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum = sum+i;
       
    }
    cout<<sum<<endl;
}