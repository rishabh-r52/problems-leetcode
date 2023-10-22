int subtractProductAndSum(int n) {
    int prod=1, sum=0;
    int rem=0;

    while(n){
        rem = n%10;
        n = n/10;
        sum = sum + rem;
        prod = prod * rem;
    }

    return (prod-sum);
}