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
int k[55][55];

void swap(int *a, int *b){
    int t = *a; *a = *b; *b = t;
}

void solve(int a[55][55], int n){
    int k = n-1;
    for(int i = 0; i< n; i++){
        swap(&a[i][i], &a[i][k--]);
    }
}

int main(){
    int n; scanf("%d", &n);
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            scanf("%d", &k[i][j]);
        }
    }
    solve(k,n);
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            printf("%d ", k[i][j]);
        }
        printf("\n");
    }
    return 0;
}
