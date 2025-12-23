//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i> b; i-=k)
#define Nmax 2000000
int a[Nmax+5]={0};


void eratosthenes(int n){
    for(int i = 2; i * i <= n; i++){
        if(a[i]==0){
            for(int j = i*i; j<=n ; j+=i){
                if(a[j]==0) a[j]=i;
            }
        }
    }
    for(int i = 2;i<=n;i++){
        if(a[i]==0) a[i]=i;
    }
}

int solve(int n){
    int sum = 0;
    while(n!=1){
        sum+=a[n];
        n/=a[n];
    }
    return sum;
}

int main(){
    eratosthenes(Nmax);
    int t,k;
    ll sum = 0;
    scanf("%d", &t);
    while(t--){
        scanf("%d",&k);
        sum+= solve(k);
    }
    printf("%lld",sum);
    return 0;
}
