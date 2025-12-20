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
#define Nmax 100005

ll ktra(ll n){
    ll N = n, z = 0,tong = 0;
    while(n > 0){
        z = z * 10 + n%10;
        tong+= n%10;
        n/=10;
    }
    return z == N && tong % 10 == 0;
}

int tcs(ll n){
    int tong = 0;
    while(n){
        tong+= n%10;
        n/=10;
    }
    return tong;
}

void sub1(int n){
    int cnt = 0;
    ll l = (ll)pow(10,n-1);
    ll r = (ll)pow(10,n);
    for(ll i = l; i< r; i++){
        if(ktra(i)) cnt++;
    }
    printf("%d\n",cnt);
}

void sub2(int n){
    int l,r;
    if(n % 2 == 0){
        l = pow(10,((int)n / 2) - 1);
        r = pow(10,(int)n / 2);
        int res = 0;
        for(int i = l; i< r; i++){
            if(tcs(i)*2 % 10 == 0) res++;
        }
        printf("%d\n",res);
    }
    else{
        l = pow(10,(int)(n/2));
        r = pow(10,(int)(n/2)+1);
        int res = 0;
        for(int i = l; i< r; i++){
            if((tcs(i)*2 - i%10) % 10 == 0) res++;
        }
        printf("%d\n",res);
    }
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d", &n);
        if(n <= 5) sub1(n);
        else sub2(n);
    }
    return 0;
}
