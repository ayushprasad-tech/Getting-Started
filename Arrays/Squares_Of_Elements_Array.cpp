#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;
    int arr[size];

    cout<<endl;

    for(int  i = 0;i<=size-1;i++){
        arr[i] = (i+1) * (i+1);
    }

    for(int i = 0;i<=size-1;i++){
        cout<<arr[i]<<"  ";
    }
}