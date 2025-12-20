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

int a[105],dem[105];

void xuly(int a[], int n){
    int max = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]){
            dem[i] = dem[i-1] + 1;
            if(dem[i] > max) max =dem[i];
        }
    }


    printf("\n%d\n",max);
    for(int i = 0; i < n; i++){
        if(dem[i] == max){
            for(int j = i-max +1; j<= i; j++){
                printf("%d ", a[j]);
            }
            printf("\n");
        }
    }
}



int main(){
    int t; scanf("%d", &t);

    for(int l = 1; l<= t; l++){
        for(int i = 0; i<= 105; i++) dem[i]=1;
        int n; scanf("%d", &n);
        for(int i = 0; i< n; i++){
            scanf("%d", &a[i]);
        }
        printf("Test %d: ",l);
        xuly(a,n);

    }

    return 0;
}
