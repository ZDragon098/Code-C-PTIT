//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<limits.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
#define Nmax 55
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int a[Nmax][Nmax],b[Nmax][Nmax],c[Nmax][Nmax];

void nhap(int a[55][55], int n, int m){
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void in(int a[55][55], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


void tich(int a[55][55], int b[55][55], int n, int m, int p){
    int d[55][55];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            d[i][j] = 0;
            for(int k = 0; k < m; k++){
                d[i][j]+=a[i][k] * b[k][j];
            }
        }
    }
   in(d,n,p);
}
int main(){

    int n,m,p,q; scanf("%d%d%d%d",&n,&m,&p,&q);
    nhap(a,n,m);nhap(b,m,p);nhap(c,p,q);

    int d[55][55];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            d[i][j] = 0;
            for(int k = 0; k < m; k++){
                d[i][j]+=a[i][k] * b[k][j];
            }
        }
    }
     tich(d,c,n,p,q);
    return 0;
}
