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

int snt(int n){
    if(n<2) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int check(int n){
    int sum = 0;
    while(n){
        int k = n% 10;
        if(k != 2 && k != 3 && k !=  5 && k != 7) return 0;
        sum += k;
        n/=10;
    }
    return snt(sum);
}

void xuly(int a, int b){
    int cnt = 0;
    for(int i = a; i<= b; i++){
        if(check(i)) cnt++;
    }
    printf("%d\n", cnt);
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t; scanf("%d", &t);
    while(t--){
        int a,b; scanf("%d %d", &a, &b);
        xuly(a, b);
    }
    return 0;
}
