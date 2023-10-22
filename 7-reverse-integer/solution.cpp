#include <iostream>
using namespace std;

#define INT_MAX 2147483647
#define INT_MIN (-2147483647 - 1)


int reverse(int x) {
    int rem=0, rev=0;        
    while (x != 0) {
        rem = x%10;
        x = x/10;
        if(rev>INT_MAX/10 || rev<INT_MIN/10)
            return 0;
        rev = rev*10 + rem; 
    }
    return rev;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Reverse: "<<reverse(num)<<endl;
}