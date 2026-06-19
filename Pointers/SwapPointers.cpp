#include <iostream>
using namespace std;
void swap(int* a,int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
    int a;
    int b;
    cout<<"Enter 'a' : ";
    cin>>a;
    cout<<"Enter 'b' : ";
    cin>>b;
    swap(&a,&b);
    cout<<"a is "<<a<<endl<<"b is "<<b;
}