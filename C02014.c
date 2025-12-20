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
#define Nmax 1000
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int a[Nmax][Nmax];

int main(){

    int n; scanf("%d", &n);
    int k = 2*n -1,N = n;
    for(int i = 0; i< n; i++){
        for(int j = 0; j< k; j++){
            a[i][j] = N;
        }
    }
    N--;
    int r = k-1,c=1;
    while(c<n){
        for(int i = c; i< n; i++){
            for(int j = c; j< r; j++){
                a[i][j]=N;
            }
        }
        N--;
        r--;
        c++;
    }

    for(int i = 0; i< n; i++){
        for(int j = 0; j< k; j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(int i = n-2; i>=0; i--){
        for(int j = k-1; j>=0; j--){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
