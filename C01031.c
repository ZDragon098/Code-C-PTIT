//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i> b; i-=k)
#define Nmax 1000005

int main(){
    int n;scanf("%d", &n);
    int f = 1;
    for(int i = 2; i*i <= n;i++){
        while(n%i==0){
            if(!f) printf("x");
            printf("%d",i);
            f = 0;
            n/=i;
        }
    }
    if(n>1){
        if(!f) printf("x");
        printf("%d",n);
    }
    return 0;
}
