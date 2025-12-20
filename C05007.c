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
int k[55][55],b[55][55],kq[55][55] ={0};

void swap(int *a, int *b){
    int t = *a; *a = *b; *b = t;
}

void xuly(int k[55][55], int n, int m,int a, int b){
    a--,b--;
    for(int i = 0 ;i < n; i++){
            int l =k[i][a];
            k[i][a] = k[i][b];
            k[i][b] = l;
    }
}


int main(){

    int n,m,a,b; scanf("%d %d", &n,&m);
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            scanf("%d",&k[i][j]);
        }
    }
    scanf("%d %d", &a,&b);
    xuly(k,n,m,a,b);
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            printf("%d ",k[i][j]);
        }
        printf("\n");
    }
    return 0;
}
