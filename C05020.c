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
ll fibo[500];
void fibonacci(){
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i <= 92; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
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
    fibonacci();
    int k = 2,b = 0,l = 0;
    while(b <= n / 2){
        for(int i = b; i < n-b; i++){
            a[b][i] = fibo[l++];
        }
        for(int i = b + 1; i < n - b; i++){
            a[i][n-b-1] = fibo[l++];
        }
        for(int i = n - b - 2; i>= b; i--){
            a[n-b-1][i] = fibo[l++];
        }
        for(int i = n - b -2; i>= b+1; i--){
            a[i][b] = fibo[l++];
        }
        b++;
    }
    in(a,n);
}


int main(){
        int n; scanf("%d", &n);
        xuly(n);
    return 0;
}

