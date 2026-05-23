#include <iostream>
using namespace std;
int main(){ 

    int x;
    cout<<"Please Enter the Number: ";
    cin>>x;
    cout<<endl;
    // (condition) ? if true : if false;
    (x%2==0) ? cout<<"Even Number" : cout<<"Odd Number";
}