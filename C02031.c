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

    int n; scanf("%d", &n);
    int N = n;
    for(int i = 1; i<=n; i++){
        int k = n-i, num = 1;
        while(num <= N){
            printf("%c",k+64);
            num++;
            k++;
        }
        printf("\n");
        N--;
    }

    return 0;
}
