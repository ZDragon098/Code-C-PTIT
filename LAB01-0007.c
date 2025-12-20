#include<stdio.h>

#define ll long long
#define db double
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
int main(){
    int n; scanf("%d", &n);
    int a[n+5];
    db res = 0;
    FOR(i,0,n,1){
        int k; scanf("%d",&k);
        res += k;
    }
    printf("%.3lf",res/n);
    return 0;
}
