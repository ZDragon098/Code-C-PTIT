//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<limits.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
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

    int k = 1;
    for(int i = 1; i<=n; i++){
        int s = 1;
        while(s++ <= n-i){
            printf("~");

        }
        for(int j = 1; j<=k;j+=2){
            printf("%d",j);
        }
        for(int j = k-2; j>=1;j-=2){
            printf("%d",j);
        }
        printf("\n");
        k+=2;
    }
    return 0;
}
