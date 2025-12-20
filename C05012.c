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

int a[25][25],b[25][25];
void in(int a[25][25],int n){
    for(int i = 1; i <=n;i++){
        for(int j = 1; j <=n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void tich(int a[25][25], int b[25][25], int n){
    int c[25][25];
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= n; j++){
            c[i][j] = 0;
            for(int k = 1; k <= n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    in(c,n);
}



int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d",&n);
        int i=1,j=1;
        while(i <=j && j<=n){
            int l = 1;
            for(int k = 1; k <= j; k++){
                a[i][l] = k;
                l++;
            }
            i++;j++;
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                b[i][j] = a[j][i];
            }
        }

        tich(a,b,n);

    }
    return 0;
}
