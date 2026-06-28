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

    int max = arr[0];

    for(int i = 1;i<=size-1;i++){
        if(max<=arr[i]) max = arr[i];
    }

    cout<<"The Max Value of All Elements in Array is : "<<max;

}