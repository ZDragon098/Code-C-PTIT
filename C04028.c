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

int a[105], b[105];

void xapxep(int a[],int n){
    int gt,j;
    for(int i = 0; i< n; i++){
        gt = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > gt){
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = gt;
        printf("Buoc %d: ",i);
        for(int j = 0; j<= i; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
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
