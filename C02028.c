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

int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}


int main(){

    int n; scanf("%d", &n);

    int a[n+5][n+5];
    int num = 1,k = 1;
    while(num <= n){
        a[1][num++] = k;
        k+=2;
    }
    for(int i = 1; i <=n;i++){
        for(int j = i; j<=n;j++){
            printf("%c",a[1][j]+64);
        }
        printf("\n");
    }

    return 0;
}
