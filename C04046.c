#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#define Nmax 100005
#define min(a,b) a < b ? a : b
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}
int a[Nmax],kc[Nmax];
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t; scanf("%d",&t);
    while(t--){
        int n,kc_min = INT_MAX; scanf("%d",&n);
        for(int i = 0; i< n; i++) scanf("%d ",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        for(int i = 1; i< n; i++){
            kc[i-1] = abs(a[i]-a[i-1]);
            kc_min = min(kc_min,kc[i-1]);
        }
        int cnt = 0;
        for(int i = 0; i < n-1; i++){
            if(kc_min == kc[i]) cnt++;
        }
        printf("%d %d",kc_min,cnt);

        printf("\n");
    }
    return 0;
}
