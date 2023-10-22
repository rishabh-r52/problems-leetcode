#include <iostream>
using namespace std;

#define INT_MAX 2147483647

bool isPalindrome(int x) {
    int temp=x, rem=0, rev=0;
    if(x<0)
        return false;
    
    while(x!=0){
        rem=x%10;
        x=x/10;
        if(rev>INT_MAX/10)
            return false;
        rev=rev*10+rem;
    }
    if(temp==rev){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isPalindrome(num)){
        cout<<num<<" is a Palindrome."<<endl;
    }
    else{
        cout<<num<<" is not a Palindrome."<<endl;
    }
}