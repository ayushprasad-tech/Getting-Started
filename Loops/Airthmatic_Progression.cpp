#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the 'n': ";
    cin>>n;
    cout<<endl;

    for(int i=4;i<=(4+(n-1)*3);i+=3) {

            cout<<i<<" ";
    }

}//1+2n-2=2n-1