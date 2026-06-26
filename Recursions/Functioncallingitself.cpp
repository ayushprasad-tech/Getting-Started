#include <iostream>
using namespace std;
void greet(){
    cout<<"Hey!!";
    greet();
}
int main(){
    greet();
}