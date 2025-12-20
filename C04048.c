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

int a[Nmax+5],b[Nmax+5]={0};

int max(int a, int b){
    return ((a > b) ? a : b);
}

int min(int a, int b){
    return ((a < b) ? a : b);
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m,k; scanf("%d %d %d", &n, &m ,&k);


    for(int i = 0; i< m; i++) scanf("%d",&a[i]);

    for(int i = 0; i< m; i++){
        int l = max(1,a[i]-k), r = min(a[i]+k,n);
        for(int j = l; j<= r;j++) b[j] = 1;
    }
    int res = 0;
    for(int i = 1 ; i<= n ; i++){
        if(b[i] == 0) {
            res++;
            for(int j = i; j<=min(n,i + 2*k) ; j++){
                b[j] = 1;
            }
        }
    }
    printf("%d", res);

    return 0;
}
