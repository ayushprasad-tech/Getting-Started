#include <iostream>
using namespace std;
int main(){ 

    int x;
    cout<<"Please Enter the Number: ";
    cin>>x;
    cout<<endl;

    if(x%15!=0 && (x%3==0 || x%5==0)) {
        cout<<"The Number is Divisible by 5 or 3 but not by 15"<<endl;
    }
        else {
        cout<<"The Number is Divisible by 15"<<endl;
    }
}