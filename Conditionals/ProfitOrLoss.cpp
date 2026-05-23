#include <iostream>
using namespace std;
int main(){

    int cp;
    cout<<"Enter the Cost Price of an item: ";
    cin>>cp;

    int sp;
    cout<<"Enter the Selling Price of that Item: ";
    cin>>sp;

    if(sp>cp) {
        cout<<"Seller made the PROFIT of "<<sp-cp<<"Rupees";
    }
    else if(cp==sp) {
        cout<<"Seller Made 0 PROFIT 0 Loss";
    }
    else cout<<"Seller made the LOSS of "<<cp-sp<<"Rupees";

}