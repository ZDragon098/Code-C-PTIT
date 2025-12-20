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

int a[Nmax][Nmax],b[Nmax][Nmax];

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
    int c[55][55];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
                c[i][j]+=a[i][k] * b[k][j];
            }
        }
    }
    in(c,n,p);
}
int main(){
    int n,m,p; scanf("%d%d%d",&n,&m,&p);
    nhap(a,n,m);nhap(b,m,p);
    tich(a,b,n,m,p);
    return 0;
}
