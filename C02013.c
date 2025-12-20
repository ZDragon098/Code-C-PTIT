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

int main(){

    int n,m; scanf("%d %d", &n, &m);
    int s = max(n,m);
    for(int i = 1; i<= n;i++){
        int num = 1;
        int l = s;
        while(num <=m && l>=1){
            printf("%d",l);
            num++;
            l--;
        }
        s--;
        int k = 2;
        while(num <=m){
            printf("%d",k);
            num++;
            k++;
        }
        printf("\n");
    }
    return 0;
}
