//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i> b; i-=k)
#define Nmax 1000005

int solve(int n){
    int i =2,result = 1;
    while(n!=1){
        int check = 0;
        while(n%i==0){
            n/=i;
            check = 1;
        }
        if(check) result *= i;
        i++;
    }
    return result;
}

int main(){
    int t;scanf("%d", &t);
    while(t--){
       int n;scanf("%d",&n);
       printf("%d\n",solve(n));
    }

    return 0;
}
