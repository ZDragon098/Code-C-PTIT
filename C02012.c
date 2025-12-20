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

int main(){

    int n,m; scanf("%d %d", &n, &m);
    for(int i = 1; i<= n ;i++){
        int num = 1;
        int k = i;
        while(num < i && num <= m){
            num++;
            printf("%d",k);
            k--;
        }
        for(int j = 1; j<= m-i+1;j++){
            if(num>m) continue;
            printf("%d",j);
            num++;
        }
        printf("\n");
    }
    return 0;
}
