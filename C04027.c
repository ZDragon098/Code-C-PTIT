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

int a[105];

void xapxep(int a[],int n){
    int min = INT_MAX,vt = 0,cnt=1,kq;
    for(int i = 0; i< n-1 ; i++){
        min = a[i]; vt = i;kq = 0;
        for(int j = i+1; j< n ; j++){
            if(a[j] < min){
                min = a[j];
                vt = j;
                kq = 1;
            }
        }

        int doi = a[i];
        a[i] = a[vt];
        a[vt] = doi;

        printf("Buoc %d: ",cnt++);
        for(int j = 0; j< n; j++) printf("%d ",a[j]);
        printf("\n");
    }

}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n; scanf("%d", &n);
    for(int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    xapxep(a,n);
    return 0;
}
