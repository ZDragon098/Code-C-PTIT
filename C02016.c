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
    int N = n;
    int i = 0,k=1,l = 4;
    for(int i = 1; i<= n; i++){
        if(i % 2 == 0){
            for(int j = 2; j<=l;j+=2) printf("%d",j);
            l+=4;
        }
        else{
            for(int j = 1; j<=k;j+=2) printf("%d",j);
            k+=4;
        }
        printf("\n");
    }
    return 0;
}
