#include <iostream>
using namespace std;
void usa(){
    cout<<"You are in USA"<<endl;
    return;
}
void india(){
    cout<<"You are in India"<<endl;
    return;
}
int main(){
    cout<<"You are in main"<<endl;
    india();
    usa();
}