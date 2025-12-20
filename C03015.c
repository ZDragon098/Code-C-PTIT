#include<stdio.h>
#define ll long long
#define Nmax 100005
ll a[Nmax];
void sangnt(){
    for(int i = 0;i<Nmax;i++) a[i] = 1;
    a[0] = a[1] = 0;
    for(int i = 2; i*i < Nmax; i++){
        if(a[i]==1){
           for(int j = i* i; j<Nmax; j+=i){
            a[j]=0;
            }
        }

    }
}

ll solve(ll n){
    ll max = 0;
    for(ll i = 2; i* i<=n;i++){
        while(n % i == 0){
            max = i;
            n/=i;
        }
    }
    if(n!=1) max = n;
    return max;
}

int main(){
    //sangnt();
    int t; scanf("%d", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        printf("%lld\n",solve(n));
    }

    return 0;
}
