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
    for(int i = 0; i<n-1; i++){

        int kq = 0;
        for(int j = 0; j< n-i-1; j++){
            if(a[j] > a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            kq = 1;
            }
        }
        if(kq)
        {
            printf("Buoc %d: ", i+1);
            for(int j = 0; j< n; j++) printf("%d ",a[j]);
        }

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

