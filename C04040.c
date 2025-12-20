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
ll a[Nmax];

//Thuat Toan Kadane
void xuly_kadane(int a[], int n){
     ll s= 0;
     ll kq = INT_MIN;
    for(int i = 0; i< n; i++){
        s+=a[i];
        if(s < 0) s = 0;
        if(s > kq) kq = s;
    }
    printf("%lld\n",kq);
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        for(int i = 0 ;i < n; i++) scanf("%lld",&a[i]);
        xuly_kadane(a,n);
    }
    return 0;
}
