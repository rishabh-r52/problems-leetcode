#include <iostream>
using namespace std;

bool canWinNim(int n) {
    return n%4!=0;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Player ";
    canWinNim(num) ? cout<<"1" : cout<<"2";
    cout<<" will win!"<<endl;
}