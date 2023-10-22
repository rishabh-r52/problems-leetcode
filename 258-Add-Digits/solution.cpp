#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        // ------------------Brute Force-----------------

        // int ans;
        // do{
        //     ans = 0;
        //     while(num>0){
        //         ans = ans + (num % 10);
        //         num = num / 10;
        //     }
        //     num = ans;
        // }while(ans>=10);
        // return ans;

        // ------------------Optimal-----------------

        if(num==0) return 0;
        if(num%9==0) return 9;
        return num%9;
    }
};

int main(){
    Solution s1;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"\n"<<s1.addDigits(num)<<endl;
}