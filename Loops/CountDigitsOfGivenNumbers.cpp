#include <iostream>
using namespace std;
int  main() {

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int f=1;

    for(int i=10;i<=n;i*=10) {
        if(n/i>=1) {
            f++;
        }
    }

    cout<<f;
}