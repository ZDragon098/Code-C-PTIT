//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<limits.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
#define Nmax 100
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int snt(int a){
    if(a < 2) return 0;
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0) return 0;
    }
    return 1;
}

int dao(int a){
    int z = 0;
    while(a){
        z = z * 10 + a % 10;
        a/=10;
    }
    return z;
}

int check(int a){
    return snt(a) && snt(dao(a));
}



int main(){

    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int k; scanf("%d", &k);
        if(check(k)) printf("1 ");
        else printf("0 ");
    }
    return 0;
}
