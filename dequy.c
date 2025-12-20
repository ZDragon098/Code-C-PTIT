#include<stdio.h>

// tinh giai thừa
int gt(int n){
    if(n==0) return 1;
    return n*gt(n-1);
}
// tính UCLN
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(a,a%b);
}

// ham Fibonacci
long long f(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return f(n-1) + f(n-2);
}

int main(){
    //int a,b; scanf("%d%d", &a, &b);
    //printf("%d", gcd(a,b));
    int n; scanf("%d", &n);
    for(int i = 0; i<= n; i++){
        printf("%lld\n",f[i]);
    }
    return 1;
}
