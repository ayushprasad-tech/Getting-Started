#include <iostream>
using namespace std;
int main(){ 

    int x;
    cout<<"Please Enter the a: ";
    cin>>x;
    cout<<endl;

    int y;
    cout<<"Please Enter the b: ";
    cin>>y;
    cout<<endl;

    int z;
    cout<<"Please Enter the c: ";
    cin>>z;
    cout<<endl;


    if(x+y>z && y+z>z && z+x>y) {
        cout<<"It can be a Triangle"<<endl;
    }
        else {
        cout<<"It cannot be a Triangle "<<endl;
    }
}