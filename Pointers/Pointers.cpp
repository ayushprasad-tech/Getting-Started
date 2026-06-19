#include <iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x;
    cout<<&x<<endl<<p<<endl;
    cout<<x<<endl;
    cout<<*p<<endl; //Star-Operator
    cout<<&p; 
}