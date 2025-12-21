#include <stdio.h>
#define ll long long
#define Nmax 10000000
int s[Nmax+5];
int primes[1000000];
int k = 0;
void sang(){
    for(int i = 2; i<Nmax; i++) s[i] = 1;
    s[0]=s[1]=0;

    for(int i = 2; i*i < Nmax; i++){
        if(s[i]){
            for(int j = i*i; j<Nmax; j+=i){
                s[j] = 0;
            }
        }
    }
    for(int i = 2; i< Nmax; i++){
        if(s[i]) primes[k++] = i;
    }
}

void xuly(ll n){
    for(int i = 0; i<= k; i++){
        ll p = primes[i];
        if(p * p > n) break;
        if(n%p == 0){
            int cnt = 0;
            while(n % p == 0){
                n /= p;
                cnt++;
            }
            printf("%lld %d\n",p,cnt);
        }
    }
    if(n > 1){
        printf("%lld 1\n",n);
    }
}

int main() {
    sang();
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int t; scanf("%d",&t);
    while(t--){
        ll n; scanf("%lld",&n);
        xuly(n);
        printf("\n");
    }
    return 0;
}
