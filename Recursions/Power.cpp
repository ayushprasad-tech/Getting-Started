#include <iostream>
using namespace std;
int pwr(int a, int b){
    if(b==0) return 1;
    return a * pwr(a,b-1);
}
int main(){
    int a, b;
    cin>>a;
    cout<<" Raised to Power "<<endl;
    cin>>b;
    cout<<pwr(a,b);
}