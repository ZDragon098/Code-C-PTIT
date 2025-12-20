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

    for(int i = 1; i<=n;i++){
        int k = n-1;
        printf("%d ",i);
        int s = i;
        for(int j = 1; j < i; j++){
            printf("%d ",s += k);
            k--;
        }
        printf("\n");
    }
    return 0;
}
