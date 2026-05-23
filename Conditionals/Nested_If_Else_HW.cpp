#include <iostream>
using namespace std;
int main() {

    int x,y,z;
    cout<<"Please Enter the age of Ram: ";
    cin>>x;
    cout<<"Enter the age of Shyam: ";
    cin>>y;
    cout<<"Enter the age of Ajay: ";
    cin>>z;

    if(x<y) { // x can never be the greatest
            if(x<z) cout<<"The yougest of three is Ram";
            else cout<<"Youngest of three is Ajay";
    }
    else {  // x>y y can never be the greatest
        if(y<z) cout<<"Youngest of all is Shyam";
        else cout<<"Youngest of three is Ajay";  // x>y and y>z
    }


}