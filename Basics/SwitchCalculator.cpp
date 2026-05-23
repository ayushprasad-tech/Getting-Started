#include <iostream>
using namespace std;
int main() {

    int x;
    cin>>x;
    char op;
    cin>>op;
    int y;
    cin>>y;

    switch(op) {

        case '+':
            cout<<x+y;
            break;
        case '-':
            cout<<x-y;
            break;
        case '*':
            cout<<x*y;
            break;
        case '/':
            cout<<x/y;
            break;
        default:
        cout<<"Inavlid Operator";

    }

}