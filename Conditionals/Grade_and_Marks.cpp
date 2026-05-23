#include <iostream>
using namespace std;
int main () {

    int g;

    cout<<"Please enter your percentage: ";
    cin>>g;

    while (g<0 || g>100) {
        cout<<"Invalid input! Your percentage must be between 0 and 100."<<endl;
        cout<<"Please enter a valid percentage: ";
        cin>>g;
    }

    if(g>=81 && g<=100) cout<<"Very Good";
    else if(g>=61) cout<<"Good";
    else if(g>=41) cout<<"Average";
    else cout <<"Fail";

}