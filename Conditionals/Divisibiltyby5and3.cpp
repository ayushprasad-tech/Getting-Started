#include <iostream>
using namespace std;
int main(){ 

    int x;
    cout<<"Please Enter the Number: ";
    cin>>x;
    cout<<endl;

    if(x%5==0 || x%3==0) {
        cout<<"The Number is Divisible by 5 or 3 "<<endl;
    }
        else {
        cout<<"The Number is not Divisible by 5 or 3"<<endl;
    }
}