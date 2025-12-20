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

    int n,m; scanf("%d %d", &n, &m);
    int a[n+5][m+5];
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= m; j++){
            a[i][j] = m;
        }
    }
    for(int i = 1;i<=n; i++){
        int k = m-1;
        for(int j = i+1; j<=m;j++){
            a[i][j] = k;
            k--;
        }

    }
    /*for(int i = 1; i<= n; i++){
        for(int j = 1; j<=m; j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }*/
    for(int i = n; i>=1; i--){
        for(int j = m; j>=1; j--){
            printf("%c",a[i][j] + 64);
        }
        printf("\n");
    }
    return 0;
}
