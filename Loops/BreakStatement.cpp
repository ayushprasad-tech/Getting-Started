#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    bool flag = true;  //true means number is prime
    for(int i=2;i<=n/2;i++) {

        if(n%i==0) {
            flag = false;  //number is composite
            break;
        }
    }

    if(flag == true) cout<<"Number is Prime";
    else cout<<"Number is composite";
}