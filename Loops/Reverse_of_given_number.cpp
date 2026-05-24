#include <iostream>
using namespace std;
int  main() {

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int f=0;

    while(n!=0) {
        f = f * 10 + (n % 10);
        n = n / 10;
    }

    cout<<f;
}