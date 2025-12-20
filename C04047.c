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
#define Nmax 100005

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int max(int a, int b){
    return ((a > b) ? a : b);
}

void sapxep(int a[],int b[],int n){
    for(int i = 0; i<n; i++){
        int k = i;
        for(int j = i+1; j< n ;j++){
            if(a[k] > a[j]) k = j;
        }
        swap(&a[i], &a[k]);
        swap(&b[i], &b[k]);
    }
}

void xuly(int a[], int b[],int n){
    int time = 0;
    for(int i = 0;i < n; i++){
        time = max(time,a[i]) + b[i];
    }
    printf("%d",time);
}

int main(){

    int n; scanf("%d", &n);
    int a[n+5], b[n+5],k=0;
    while(n--){
        scanf("%d %d", &a[k], &b[k]);
        k++;
    }
    sapxep(a,b,k);
    xuly(a,b,k);
    return 0;
}
