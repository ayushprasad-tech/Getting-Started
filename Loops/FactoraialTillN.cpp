#include <iostream>
using namespace std;
int  main() {

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int f=1;

    while(n!=0) {
        
        f = 1;

        for(int i=n;i>=1;i--) {
            f = f * i;
        }


        cout<<f<<" ";

        n = n - 1;
    }

}