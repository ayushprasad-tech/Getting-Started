#include <iostream>
using namespace std;
int main(){ 

    int a;
    cout<<"Please Enter the Number: ";
    cin>>a;
    cout<<endl;

    if(a>99 && a<1000) {
        cout<<"The Number is Three Digit Number"<<endl;
    }
        else {
        cout<<"The Number is not a Three Digit Number!!!"<<endl;
    }
}