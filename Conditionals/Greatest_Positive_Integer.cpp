#include <iostream>
using namespace std;
int main(){

    int x;
    cout<<"Enter the 1st Number:";
    cin>>x;

    int y;
    cout<<"Enter the 2nd Number:";
    cin>>y;

    int z;
    cout<<"Enter the 3rd Number:";
    cin>>z;

    if(x>y && x>z) cout<<"The Greatest Positive Integer is "<<x;
    else if(y>x && y>z) cout<<"The Greatest Positive Integer is "<<y;
    else cout<<"The Greatest Positive Integer is "<<z;
}