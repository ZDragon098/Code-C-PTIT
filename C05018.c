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
int a[105][105];

void in(int a[105][105], int n){
    for(int i = 0; i <n;i++){
        for(int j = 0; j < n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void xuly(int n){
    int k = n*n,b = 0;
    while(b <= n / 2){
        for(int i = b; i < n-b; i++){
            a[b][i] = k--;
             //printf("%d ",a[b][i]);
        }
        for(int i = b + 1; i < n - b; i++){
            a[i][n-b-1] = k--;
            //printf("%d ",a[i][n-b-1]);
        }
        for(int i = n - b - 2; i>= b; i--){
            a[n-b-1][i] = k--;
            //printf("%d ",a[n-b-1][i]);
        }
        for(int i = n - b -2; i>= b+1; i--){
            a[i][b] = k--;
            //printf("%d ",a[i][b]);
        }
        b++;
    }
    in(a,n);
}


int main(){

    int t; scanf("%d",&t);
    for(int i = 1; i<= t; i++){
        int n; scanf("%d", &n);
        printf("Test %d:\n",i);
        xuly(n);
    }

    return 0;
}
