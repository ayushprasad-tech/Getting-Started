#include <iostream>
using namespace std;
int  main() {

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int f=1;
    int x=n;

    while(n!=0) {
        f = f * n;
        n = n - 1;
    }

    cout<<x<<"! is "<<f;
}