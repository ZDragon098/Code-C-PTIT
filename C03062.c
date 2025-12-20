//ZDragon

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100

int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b){
    return (a / gcd(a,b))*b;
}

void xuly(ll n, ll m){
    ll res = 1;
    for(ll i = n; i <= m; i++){
        res = lcm(res,i);
    }
    printf("%lld\n",res);
}

int main(){

    ll t; scanf("%lld",&t);
    while(t--){
        ll n,m; scanf("%lld %lld", &n, &m);
        xuly(n,m);
    }
    return 0;
}
