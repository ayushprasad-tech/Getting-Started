#include <iostream>
using namespace std;
int  main() {

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int f=0;

    while(n!=0) {
        if(n%2==0) {
         f = (n % 10) + f;
        }
        n = n / 10;
    }

    cout<<f;
}