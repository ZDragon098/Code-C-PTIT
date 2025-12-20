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
int a[105][105],b[105][105];

void in(int a[105][105],int n, int m){
    for(int i = 0; i < n; i++){
            for(int j  = 0; j < m; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
}


int main(){

    ll n,mi_a = INT_MAX, mi_b=INT_MAX,cnt = 0;
    scanf("%lld",&n);
    while(n--){
        int a,b; scanf("%d %d", &a, &b);
        mi_a = min(a,mi_a);
        mi_b = min(b,mi_b);
    }

    printf("%lld",mi_a * mi_b);
    return 0;
}
