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
    int cnt = 1;
    for(int i = 0; i<n;i++){
        int kq = 0;
        for(int j = i+1; j< n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j]=temp;
                kq = 1;
            }
        }
        if(kq){
            printf("Buoc %d: ",cnt);
            cnt++;
            for(int j = 0; j< n; j++) printf("%d ",a[j]);
            printf("\n");
        }

    }
}

int main(){
    int n; scanf("%d", &n);
    for(int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    xapxep(a,n);
    return 0;
}
