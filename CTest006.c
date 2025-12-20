#include<stdio.h>

#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define Nmax 1005

int a[25][25],p[Nmax];
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
    int n,m; scanf("%d%d",&n,&m);
    FOR(i,0,n,1){
        FOR(j,0,m,1){
            int k; scanf("%d", &k);
            if(p[k]) a[i][j]=1;
            else a[i][j] = 0;
        }
    }
    FOR(i,0,n,1){
        FOR(j,0,m,1){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
