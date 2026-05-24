#include <iostream>
using namespace std;
int main() {

    int m;
    cout<<"Enter the Number of Rows: ";
    cin>>m;

    for(int i=m;i>=1;i--) {
        for(int x=m;x>=1;x--) cout<<"*"<<" ";
        cout<<endl;
    }

}