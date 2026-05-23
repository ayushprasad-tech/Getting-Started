#include <iostream>
using namespace std;
int main(){

float p;
float r;
float t;
float s;

cout<<"Please, Enter the Principal Value: ";
cin>>p;
cout<<endl<<"Now, Enter the Rate of Interest: ";
cin>>r;
cout<<"\n"<<"Enter you time period of the Loan: ";
cin>>t;
cout<<endl;
s = p*r*t/100;

cout<<"Your Simple Interest with Principle value "<<p<<" with rate of interest "<<r<<"% with duration of "<<t<<" years is: "<<s;

}