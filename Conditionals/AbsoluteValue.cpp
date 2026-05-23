#include <iostream>
using namespace std;
int main(){ 

    int x;
    cout<<"Please Enter the Number: ";
    cin>>x;
    cout<<endl;

    if(x>=0) {
        cout<<"The Number is "<<x<<endl;
    }
        else {
        cout<<"The Number is "<<-x<<endl;
    }
}