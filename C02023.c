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

void nhap(int n,int k,int j,int m){
    for(int i = 1; i<= n; i++){
        int j = i,num = 1;
        k--;
        while(j++<=m && num <=m){
            printf("%c",k);
            num++;
        }
        printf("\n");
    }
}

int main(){
    int n,m; scanf("%d %d", &n, &m);

    char a[n+5][m+5];
    int kt = 1,l=-1,r=-1;
    int k = 96 + max(m,n)+1;
    while(kt++ <= n){
        k--;
        l++;r++;
        for(int i = l;i < n; i++){
            for(int j = r;j< m; j++){
                a[i][j] = k;
                //printf("%c ",a[i][j]);
            }
            //printf("\n");
        }
    }
    for(int i = 0;i < n; i++){
            for(int j = 0;j< m; j++){
                //a[i][j] = k;
                printf("%c",a[i][j]);
            }
            printf("\n");
        }



    return 0;
}
