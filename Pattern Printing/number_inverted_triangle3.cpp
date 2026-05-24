#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the number of sides: ";
    cin>>n;

    for(int i=1;i<=n;i++) {

        for(int j=n;j>=1+n-i;j--) cout<<j<<" ";

        cout<<endl;

    }


}