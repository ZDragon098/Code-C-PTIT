//ZDragon

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}


void in(int a[105][105],int n, int m){
    for(int i = 0; i < n; i++){
        for(int j  = 0; j < m; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int matrix[105][105],a[105][105];

void sol(int matrix[105][105], int n, int m){
    int l=0,r=m-1,t=0,b=n-1;
    while(l <=r && t <= b){
        for(int i = l; i<= r; i++){
            printf("%d ", matrix[t][i]);
        }
        t++;
        for(int i = t; i <=b;i++){
            printf("%d ",matrix[i][r]);
        }
        r--;
        if(t <= b){
           for(int i = r; i >= l; i--){
            printf("%d ",matrix[b][i]);
        }
        b--;
        }
        if(l <=r){
           for(int i = b;i >= t;i--){
            printf("%d ",matrix[i][l]);
        }
        l++;
        }

    }
}

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n,m; scanf("%d %d", &n, &m);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                scanf("%d",&matrix[i][j]);
        }
        /*for(int i = 0; i < n * m; i++){
                printf("%d ",matrix[i]);
        }
        printf("\n");*/
        //in(matrix,n,m);
        sol(matrix,n,m);
        printf("\n");
    }
    return 0;
}
