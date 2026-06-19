#include <iostream>
using namespace std;
void swap(int& x, int& y){
    x = x + y;
    y = x - y;
    x = x - y;
}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<a<<endl<<b<<endl;
    swap(a,b);
    cout<<a<<endl<<b<<endl;
}