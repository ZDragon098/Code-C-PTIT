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
#define Nmax 1005
#define Nmax 100000

int mu(int n,int p){
    int cnt = 0;
    while(n%p==0){
        cnt++;
        n/=p;
    }
    return cnt;
}

void solve(int n, int p){
    int i = 1,res=0;
    while(true){
        if (p * i > n) break;
        res = res + 1 + mu(i,p);
        i++;
    }
    printf("%d\n",res);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n,p; scanf("%d%d",&n,&p);
        solve(n,p);
    }

    return 0;
}
