#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Entert the 'n': ";
    cin>>n;

    bool b = true;

    for(int i=1;i<=n;i++) {

                    if(i%2==0) b = false;
                    else b= true;

        for(int j=1;j<=i;j++) {

            cout<<b<<" ";
            b = !b;
        }

        cout<<endl;

    }

}