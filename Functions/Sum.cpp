#include <iostream>
using namespace std;
void sum(int a, int b){
    cout<<a+b;
}
int main(){
    int a;
    cout<<"Enter First Number: ";
    cin>>a;
    int b;
    cout<<"Enter Second Number: ";
    cin>>b;
    sum(a,b);
}