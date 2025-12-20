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
#define Nmax 30000


int main(){
    int a[15] = {1,2,5,10,20,50,100,200,500,1000}; //n(a) = 9;
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int cnt = 0,k = 9;
        while(n != 0){
            while(n >= a[k]){
                cnt++;
                n-=a[k];
            }
            k--;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
