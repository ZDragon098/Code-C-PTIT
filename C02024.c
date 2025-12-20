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

int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}


int main(){

    int n,m; scanf("%d %d", &n, &m);
    for(int i = 1; i<= n; i++){
        int num = 1;
        for(int j = i; j<=m; j++){
            printf("%c",j+64);
            num++;
        }
        int k;
        if(i<=m) k = i-1;
        else k = m;
        while(num <=m){
            printf("%c",k+64);
            k--;
            num++;
        }
        printf("\n");
    }

    return 0;
}
