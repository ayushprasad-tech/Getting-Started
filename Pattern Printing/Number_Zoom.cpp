#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the 'n': ";
    cin>>n;

    int m = 0;

    for(int i=1;i<=2*n-1;i++) {

        for(int j=1;j<=2*n-1;j++) {

            int a = i;
            if(i>n) {
                a = 2 * n - i;
            }
            int b = j;
            if(j>n) b = 2 * n - j;
            if(a<b) m = a;
            else m = b;

            cout<<m<<" ";

        }
        cout<<endl;
    }

}