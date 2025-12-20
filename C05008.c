//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<limits.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
#define Nmax 1000
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int a[Nmax+5][Nmax+5];

int main(){

    int t; scanf("%d", &t);

    for(int s = 1; s<= t; s++){
        int n,m,ma_h = 0,ma_c = 0,vt_h,vt_c;
        scanf("%d %d", &n,&m);
        for(int i = 0; i < n ; i++){
            int k= 0;
            for(int j = 0 ;j < m; j++){
                scanf("%d",&a[i][j]);
                k+=a[i][j];
            }
            if (ma_h < k){
                ma_h = k;
                vt_h = i;
            }
        }

        for(int i = 0; i< m; i++){
            int k = 0;
            for(int j = 0; j < n; j++){
                if(vt_h == j) continue;
                k+=a[j][i];
            }
            if(ma_c < k){
                ma_c = k;
                vt_c = i;
            }
        }
        printf("Test %d:\n",s);
        //printf("%d %d\n",vt_h,vt_c);
        for(int i = 0; i < n; i++){
            if(vt_h == i) continue;
            for(int j = 0; j < m; j++){
                if(vt_c == j) continue;
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
