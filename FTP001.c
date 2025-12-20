//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<limits.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
#define Nmax 105
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
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            a[i][j] = 0;
    }

    for(int i = 0; i < n; i++){
        int k=0;
        for(int j = i; j < n; j++){
            a[i][j] = k++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
