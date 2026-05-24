#include <iostream>
using namespace std;
int main() {

    int m,n;
    cout<<"Enter the Number of Rows: ";
    cin>>m;
    cout<<"Enter the number of Coloumns: ";
    cin>>n;

    for(int i=m;i>=1;i--) {
        for(int x=n;x>=1;x--) cout<<"*"<<" ";
        cout<<endl;
    }

}