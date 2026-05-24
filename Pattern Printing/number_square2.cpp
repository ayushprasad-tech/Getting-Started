#include <iostream>
using namespace std;
int main() {

    int m;
    cout<<"Enter side of square: ";
    cin>>m;

    for(int i=1;i<=m;i++) {
        for(int x=1;x<=m;x++) cout<<i<<" ";
        cout<<endl;
    }

}