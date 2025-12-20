#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define ll long long

int cmp(const void *a, const void *b){
    int *x = (int *)a;
    int *y = (int *)b;
    return *x - *y;
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

//void sx(a,)
int binary_search(int *arr, int start, int end, int result){
    int mid = (start + end) / 2;
    if(arr[mid] == result) return mid;
    if(arr[mid] > result) end = mid -1;
    else start = mid + 1;
    return -1;
}

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t; scanf("%d",&t);
    for(int s = 1; s<= t; s++){
        int n,m; scanf("%d %d",&n,&m);
        int a[n+5][m+5];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d",&a[i][j]);
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                for(int k = i;k<n;k++){
                    for(int l = j; l < m; l++){
                        if(a[i][j] > a[k][l]){
                            swap(&a[i][j], &a[k][l]);
                        }
                    }
                }
            }
        }
        printf("Test %d:\n",s);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");

        }
    }
    return 0;
}
