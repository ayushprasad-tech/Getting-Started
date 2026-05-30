#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the 'n': ";
    cin>>n;

    for(int i=1;i<=2*n-1;i++) cout<<i<<" ";
    cout<<endl;

    for(int i=1;i<=n-1;i++) {

        for(int j=1;j<=n-i;j++) cout<<j<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"  ";
        for(int j=1;j<=n-i;j++) cout<<j+i+n-1<<" ";

        cout<<endl;

    }

}