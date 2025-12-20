//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<limits.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i> b; i-=k)
#define Nmax 1005
#define Nmax 100005

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a, ll b){
    return(a / gcd(a,b)) * b;
}
void sol(int n){
    ll res = 1;
    for(int i = 2; i<=n; i++){
        res = lcm(res,i);
    }
    printf("%lld\n",res);
}

int main(){

    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        sol(n);
    }
    return 0;
}
