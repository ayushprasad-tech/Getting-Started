#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int f=1;

    for(int i=n/2;i>=1;i--) {

        if(n%i==0) {
            f++;
        }

    }

    if(f>2) cout<<"The number is composit number.";
    else cout<<"The number is prime";
}