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
int d[Nmax+5],a[105];

int main(){
    int t; scanf("%d",&t);
    while(t--){
        for(int i = 0; i<=Nmax; i++) d[i]=0;
        int n,max=0; scanf("%d",&n);
        for(int i = 0; i< n; i++){
            scanf("%d",&a[i]);
            d[a[i]]++;
            if(d[a[i]]>max) max = d[a[i]];
        }
        for(int i = 0; i< n; i++){
            if(d[a[i]] == max){
                printf("%d ",a[i]);
                d[a[i]]=0;
            }

        }
        printf("\n");
    }

    return 0;
}
