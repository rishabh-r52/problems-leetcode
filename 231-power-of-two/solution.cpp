bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false; // Negative numbers and zero are not powers of two
    }

    return (n & (n - 1)) == 0;
    // if(n<1)
    //     return false;
    // int power=1;
    // while(power<=n){
    //     if(n!=power){
    //         if(power>INT_MAX/10)
    //             return false;
    //         power*=2;
    //     }
    //     else{
    //         return true;
    //     }
    // }
    // return false;
}