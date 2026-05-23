#include <iostream>
using namespace std;
int main() {

    int x,y;

    cout<<"Enter the x-coordinate: ";
    cin>>x;

    cout<<"Enter the y-coordinate: ";
    cin>>y;

    if(x>0 && y>0) cout<<"The given point lies in the 1st Quadrant.";
    else if(x>0 && y<0) cout<<"The Given point lies in the 4th Quadrant.";
    else if(x<0 && y>0) cout<<"The given point lies in the 2nd Quadrant.";
    else if(x<0 && y<0) cout<<"The given point lies in the 3rd Quadrant.";
    else if(x==0 && y==0) cout<<"Point Lies on the Origin.";
    else if(x=0) cout<<"Point Lies on the y-axis.";
    else cout<<"Point lies on the x-axis";

}