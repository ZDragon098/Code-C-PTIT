//ZDragon

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int a[105][105],b[105][105];

void in(int a[105][105],int n, int m){
    for(int i = 0; i < n; i++){
            for(int j  = 0; j < m; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
}

void tich(int a[105][105], int b[105][105], int n, int m, int p){
    int c[105][105];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }

    }
    in(c,n,n);
}

int main(){

    int t; scanf("%d",&t);
    for(int l = 1; l <= t;l++){
        int n,m; scanf("%d %d", &n, &m);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                scanf("%d", &a[i][j]);
        }

        for(int i = 0; i < m; i++){
            for(int j  = 0; j < n; j++){
                b[i][j] = a[j][i];
            }
        }
        //in(b,m,n);
        printf("Test %d:\n",l);
        tich(a,b,n,m,n);
    }
    return 0;
}
