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

int a[Nmax+5][Nmax+5];
int snt(int n){
    if(n<2) return 0;
    for(int i = 2; i*i<=n;i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int main(){

    for(int i = 0; i<Nmax;i++){
        for(int j = 0; j < Nmax; j++){
            a[i][j] = 0;
        }
    }
    int n,m=0; scanf("%d", &n);
    for(int i = 0; i< n; i++){
        int cnt = 0;
        for(int j = 0; j<n; j++){
            int k; scanf("%d", &k);
            if(snt(k)){
                cnt++;
                a[i][j] = k;
            }
        }
        a[i][n] = cnt;
        m = max(m,cnt);
    }
    for(int i = 0; i<n;i++){
        if(a[i][n] == m){
            printf("%d\n",i+1);
            for(int j = 0; j< n; j++){
                if(a[i][j] != 0){
                    printf("%d ",a[i][j]);
                }
            }
            break;
        }
    }


    return 0;
}
