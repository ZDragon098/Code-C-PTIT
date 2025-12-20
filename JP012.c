#include<stdio.h>

#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define Nmax 100
ll f[100];
void fibonacci(){
    f[1]=1;f[2]=1;
    FOR(i,3,93,1){
        f[i] = f[i-1] + f[i-2];
    }
}

int main(){
    fibonacci();
    int t; scanf("%d", &t);
    while(t--){
        int a,b; scanf("%d%d", &a,&b);
        FOR(i,a,b+1,1){
            printf("%lld ",f[i]);
        }
        printf("\n");
    }

    return 0;
}
