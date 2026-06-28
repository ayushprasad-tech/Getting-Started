#include <iostream>
using namespace std;
int main(){

    int size = 0;
    int arr[size];
    cout<<"Enter the size of Array : ";
    cin>>size;

    for(int i = 0;i<=(size-1);i++){
        cout<<"Enter the "<<i+1<<" Element : ";
        cin>>arr[i];
    }

    int sum = 0;

    for(int i = 1;i<=size-1;i++){
        sum  = sum + arr[i];
    }

    cout<<"The Sum of All Elements in Array is : "<<sum;

}