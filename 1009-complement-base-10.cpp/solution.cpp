#include <iostream>
using namespace std;

int bitwiseComplement(int n) {
    if(n==0) return 1;
    if(n==1) return 0;
    int rem, ans=0, mul=1;
    while(n>0){
        rem = n%2;
        n = n/2;
        if(rem==0){
            rem=1;
        }
        else if(rem==1){
            rem=0;
        }
        ans=ans + mul*rem;
        mul*=2;
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<bitwiseComplement(num)<<endl;
}