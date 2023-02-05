#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter your Marks"<<endl;
    cin>> marks;
    if(marks>=95){
        cout<<"Your Grade is S"<<endl;
    }
    else if(marks>=90){
        cout<<"Your Grade is A"<<endl;
    }
    else if(marks>=80){
        cout<<"Your Grade is B"<<endl;
    }
    else if(marks>=70){
        cout<<"Your Grade is C"<<endl;
    }
    else if(marks>=60){
        cout<<"Your Grade is D"<<endl;
    }
    else if(marks>=50){
        cout<<"Your Grade is E"<<endl;
    }
    else{
        cout<<"Your Grade is F"<<endl;
    }
}