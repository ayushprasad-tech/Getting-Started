#include <iostream>
using namespace std;
int main(){ 

    int a,b,c;
    cout<<"Please Enter the 1st Number: ";
    cin>>a;
    cout<<endl;
    cout<<"Please Enter the 2nd Number: ";
    cin>>b;
    cout<<endl;
    cout<<"Please Enter the 3rd Number: ";
    cin>>c;
    cout<<endl;

    if(a>b) { // b can never be the greatest
        if(a>c) cout<<"The Greatest Number is "<<a;
        else cout<<"The Greatest Number is "<<c;
    }
        else { //b>a
        if(b>c) cout<<"The Greatest Number is "<<b<<endl;
        else cout<<"The Greatest Number is "<<c;
    }
}