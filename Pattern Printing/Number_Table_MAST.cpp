#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the 'n': ";
    cin>>n;

    int nsp = 1;
    int p=0;

    for(int i=1;i<=2*n-1;i++) {

        if(i<=n) {
            p++;
            cout<<p<<" ";
        }

        else {
            p--;
            cout<<p<<" ";
        }
    }

    cout<<endl;

    for(int i=1;i<=n-1;i++) {

        for(int j=1;j<=n-i;j++) cout<<j<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"  ";
        for(int j=n-i;j>=1;j--) cout<<j<<" ";

        cout<<endl;

    }

}