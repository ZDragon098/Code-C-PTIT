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

int p[Nmax+5];
void sang(){
    for(int i = 0; i<= Nmax; i++) p[i]=1;
    p[0]=p[1]=0;
    for(int i = 2; i * i<=Nmax; i++){
        if(p[i]){
            for(int j = i * i; j<=Nmax; j+=i){
                p[j] = 0;
            }
        }
    }
}

int xuly(int n){
    int N = n, z = 0;
    while(n){
        if(n%10 == 9) return 0;
        z = z * 10 + n%10;
        n/=10;
    }
    return N == z;
}


void sol(int n){
    int cnt = 0;
    for(int i = 2; i< n; i++){
        if(xuly(i)){
            cnt++;
            printf("%d ",i);
        }
    }
    printf("\n%d",cnt);
}

int main(){
    int n; scanf("%d",&n);
    sol(n);
    return 0;
}
