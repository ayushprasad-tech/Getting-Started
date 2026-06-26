#include <iostream>
using namespace std;
void print(int a){
    if(a==0) return;
    print(a-1);
    cout<<a<<endl;
}
int main(){
    int n;
    cout<<"Enter the 'n' : ";
    cin>>n;
    print(n);
}
