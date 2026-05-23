#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<endl;

    for(int i=n;i<=(10*n);i+=n) {
        cout<<i<<endl;
    }
}