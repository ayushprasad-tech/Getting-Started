#include <iostream>
using namespace std;
int pwr(int a, int b){
    if (b==0) return 1;
    if(b%2==0){
        int c = pwr(a,b/2);
        return c * c;
    }
    else{
        return pwr(a,b/2) * pwr(a,b/2) * a;
    }
}
int main(){
    int a, b;
    cout<<"a = ";
    cin>>a;
    cout<<" Raised to Power b = ";
    cin>>b;
    cout<<pwr(a,b);
}