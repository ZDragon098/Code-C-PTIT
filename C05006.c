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

void doihang(int k[55][55],int a,int b,int n){
    int l;
    for(int i = 0; i< n; i++){
        l = k[a][i];
        k[a][i] = k[b][i];
        k[b][i] = l;
    }
}

int main(){
    int n,m,a,b; scanf("%d %d", &n, &m);
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            scanf("%d", &k[i][j]);
        }
    }
    scanf("%d %d",&a,&b);
    a--;b--;

    doihang(k,a,b,m);
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            printf("%d ", k[i][j]);
        }
        printf("\n");
    }
    return 0;
}
s
