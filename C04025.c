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
int even[105], odd[105];

void xapxep(int a[],int n){
    for(int i = 0; i<n;i++){
        for(int j = i+1; j< n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){
    int n; scanf("%d", &n);
    int chan = 0, le = 0;
    for(int i = 0; i< n; i++){
        int k; scanf("%d",&k);
        if(k % 2 == 0) even[chan++] = k;
        else odd[le++] = k;
    }
    xapxep(odd,le);xapxep(even,chan);
    for(int i = 0; i< chan; i++) printf("%d ",even[i]);
    for(int i = 0; i< le; i++) printf("%d ",odd[i]);

    return 0;
}

