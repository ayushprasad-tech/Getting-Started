#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    int nsp=1;
    int nst = 1;

    for(int i=1;i<=n;i++) {

        if(i<=n/2+1) {

            for(int j=1;j<=n/2-i+1;j++) cout<<"  ";

            for(int j=1;j<=2*i-1;j++) cout<<"* ";

            cout<<endl;

        }

        else {

            for(int j=1;j<=nsp;j++) cout<<"  ";

            for(int j=1;j<=2*((n/2+1)-nsp)-1;j++) cout<<"* "; 

            nsp = nsp + 1;

            cout<<endl;

        } 

    }

}