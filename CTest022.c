#include<stdio.h>
#include<math.h>

#define FOR(i,a,b,k) for(int i = 1; i< b; i+=k)
#define ll long long

ll demcs(ll n){
    int cnt = 0;
    while(n > 0){
        cnt++;
        n/=10;
    }
    return cnt;
}
 ll gcd(ll a, ll b){
    while(b != 0){
        int r = a % b;
        a = b; b = r;
    }
    return a;
}

ll lcm(ll a, ll b){
    return (a * b) / gcd(a,b);
}
void sol(ll n,ll k){
    ll n1 = n % (ll)pow(10,k),n2 = n / (ll)pow(10,k);
    printf("%lld",lcm(n1,n2));
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll k = demcs(n);
        if(k % 2){
            printf("INVALID");
        }
        else{
            sol(n,(int)k/2);
        }
        printf("\n");
    }
    return 0;
}
