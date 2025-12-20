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

void swap(int *a, int *b){
    int t = *a; *a = *b; *b = t;
}

void xuly(){

}

int snt(int n){
    if(n<2) return 0;
    for(int i = 2; i* i<= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){

    int n; scanf("%d", &n);
    FOR(i,0,n,1){
        FOR(j,0,n,1){
            scanf("%d",&a[i][j]);
            if(snt(a[i][j])==0) a[i][j]=0;
        }
    }

    int l=0,r = n-1, res = 0;
    FOR(i,0,n,1){
        int l1 = l;
        while(l1<=r){
            res += a[i][l1];
            l1++;
        }
        l++;
    }
    printf("%d",res);
    return 0;
}
