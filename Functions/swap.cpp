#include <iostream>
using namespace std;
int main(){
    int a = 405;
    int b = 593;
    cout<<a<<endl<<b<<endl;
    // int temp = a;
    // a = b;
    // b = temp;
    a = a + b;
    b = a - b;
    a = a - b; 
    cout<<a<<endl<<b<<endl;
}