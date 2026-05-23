#include <iostream>
using namespace std;
int main(){ 

    int x;
    cout<<"Please Enter the Length of Rectangle: ";
    cin>>x;
    cout<<endl;

    int y;
    cout<<"Please Enter the Breadth of Rectangle: ";
    cin>>y;
    cout<<endl;

    int p = 2*(x + y);
    int a = x * y;

    if(a>p) {
        cout<<"The Area of Rectangle is Greater than its Perimeter"<<endl;
    }
    else if(a==p) {
        cout<<"The Area of Rectangle is Equal to its Perimeter"<<endl;
    }
    else cout<<"The Area of Rectangle is Less than its Perimeter"<<endl;

}