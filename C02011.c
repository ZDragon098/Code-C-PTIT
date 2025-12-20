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
int a[55][55],b[55][55],kq[55][55] ={0};


int main(){
    int n,m; scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        int num = 1;
        for(int j = i; j<=m; j++){
            printf("%d", j);
            num++;
        }
        if(i<= m){
            int k = m-1;
            while(num <= m){
            printf("%d",k);
            num++;
            k--;
            }
        }
        else{
            int k = i;
            while(num <= m){
                printf("%d",k);num++;
                k--;
            }
        }

        printf("\n");
    }
    return 0;
}
