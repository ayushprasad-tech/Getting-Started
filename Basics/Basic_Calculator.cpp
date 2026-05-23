#include <iostream>
using namespace std;
int main() {

    int a,b;
    char ch;

    cout<<"Enter the 1st number: ";
    cin>>a;

    cout<<"Select the operator ";
    cin>>ch;

    cout<<"Enter the Second Number: ";
    cin>>b;

    if(ch=='+') cout<<a+b;
    else if(ch=='-') cout<<a-b;
    else if(ch=='*') cout<<a*b;
    else if(ch=='/') cout<<a/b;
}