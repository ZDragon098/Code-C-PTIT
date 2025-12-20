#include<stdio.h>

#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define Nmax 1005

int a[1005],p[Nmax],b[1005];
void isprime(int n){
    FOR(i,0,n,1) p[i]=1;
    p[0]=p[1]=0;
    for(int i = 2; i* i <= n; i++){
        if(p[i]){
            for(int j = i* i; j<=n; j+=i) p[j]=0;
        }
    }
}
int main(){
    isprime(Nmax);
    int t;scanf("%d", &t);
    while(t--){
        FOR(i,0,Nmax,1) b[i]=0;
        int n;scanf("%d", &n);
        FOR(i,0,n,1){
            scanf("%d", &a[i]);
            if(p[a[i]])
                b[a[i]]++;
        }
        FOR(i,0,Nmax,1){
            if(b[i] !=0) printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}
