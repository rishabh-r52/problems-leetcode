#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }

        while (n % 2 == 0) {
            n /= 2;
        }

        while (n % 3 == 0) {
            n /= 3;
        }

        while (n % 5 == 0) {
            n /= 5;
        }

        // if(n==1) return true;
        // else return false;
        return n==1;
    }
};

int main(){
    Solution s1;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"\n"<<s1.isUgly(num)<<endl;
}