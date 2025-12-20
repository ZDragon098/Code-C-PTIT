#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ll long long

int cmp(const void *a, const void *b){
    ll *x = (ll *)a;
    ll *y = (ll *)b;
    return *x - *y;
}

int binary_search(ll *arr, int start, int end, ll target){
    while(start <= end){
        int mid = (end + start) /2;
        if(arr[mid] == target) return 1;
        if(arr[mid] > target) end = mid -1;
        else start = mid+1;
    }
    return 0;
}

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t; scanf("%d",&t);

    while(t--){
        ll a[5005];
        int n; scanf("%d", &n);
        for(int i = 0; i < n ;i++) scanf("%lld",&a[i]);
        qsort(a,n,sizeof(ll),cmp);

        ll sq[5005];
        for(int i = 0; i < n;i++){
            sq[i] = a[i] * a[i];
            //printf("%d ",sq[i]);
        }

        int found = 0;
        for(int i = 0; i < n && !found; i++){
            for(int j = i+1; j < n && !found; j++){
                ll sum = sq[i] + sq[j];

                if(binary_search(sq,j+1,n-1,sum)){
                    found = 1;
                }
            }
        }
        if(found) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
