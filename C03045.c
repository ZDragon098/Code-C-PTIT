#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100000
#define db double
#define max(a,b) a > b ? a : b

ll snt(ll n){
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    ll kq=0;
    while(t--){
        ll n; scanf("%lld", &n);
        for(ll i = 2; i * i <= n; i++){
            while(n % i == 0){
                kq = i;
                n/=i;
            }
        }
        if(n!=1) kq = n;
        printf("%lld\n",kq);
    }


    return 0;
}
