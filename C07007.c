#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100000
#define db double
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b){
    return (a / gcd(a,b)) * b;
}



int main(){

    ll n,a,b,c,d; scanf("%lld",&n);

    for(int i = 1; i<=n;i++){
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        ll mau_so_chung = lcm(d,b);
        a = a * (ll)(mau_so_chung / b);
        c = c * (ll)(mau_so_chung / d);

        ll x = gcd(a+ c, mau_so_chung);
        ll y = gcd(a,c);
        printf("Case #%d:\n",i);
        printf("%lld/%lld %lld/%lld\n",a,mau_so_chung,c,mau_so_chung);
        printf("%lld/%lld\n",(a + c) / x, mau_so_chung / x);
        printf("%lld/%lld\n",a/y,c/y);
    }

    return 0;
}
