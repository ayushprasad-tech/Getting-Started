#include <iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=1;i<=x;i++){
        f = f * i;
    }
    return f;
}
int ncr(int x, int y){
    int a = fact(x);
    int b = fact(y);
    int c = fact(x-y);
    return a/(b*c);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 0;i<=n;i++){
        for(int j = 1;j<=(n-i);j++) cout<<"  ";
        for(int j = 0;j<=i;j++){
            cout<<ncr(i,j)<<"   ";
        }
        cout<<endl<<endl;
    }
}