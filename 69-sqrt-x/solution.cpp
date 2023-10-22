#include <iostream>
#include <math.h>
using namespace std;

// int mySqrt(double x) {
double mySqrt(double x) {
    if(x==0) return 0;
    if(x==1) return 1;
    
    int temp = x, count = 0;
    while(temp>0){
        temp = temp / 10;
        count++;
    }

    double x_approx = x/(count+1);
    double x2 = 0;
    do{
        x2 = 0.5*(x_approx + (x/x_approx));
        x_approx = x2;
    }while(fabs((x2*x2)-x)>=0.000001);
    // return int(x2);
    return x2;
    // remove int() and change return type of function to double to get square root in decimal values
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"\n"<<mySqrt(num);
}