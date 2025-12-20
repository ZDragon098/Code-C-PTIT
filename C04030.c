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
    }
}


int main(){
    int t; scanf("%d", &t);
    for(int l = 1; l<= t; l++){
        int n; scanf("%d", &n);
        for(int i = 0; i< n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 0; i< n; i++){
            scanf("%d", &b[i]);
        }
        xapxep(a,n);
        xapxep(b,n);

        printf("Test %d:\n",l );
        int k1 = 0, k2 = n-1,i=0;
        while(i < 2 * n){
            if(i % 2 == 0){
                printf("%d ",a[k1++]);
            }
            else printf("%d ",b[k2--]);
            i++;
        }
        printf("\n");
    }

    return 0;
}
