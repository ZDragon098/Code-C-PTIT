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
int a[105];

void sapxep(int a[], int n){
    for(int i = 0; i< n-1; i++){
        int vt = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[vt]){
                vt = j;
                //printf("%d %d\n",k,vt);
            }
        }
        int temp = a[i];
        a[i] = a[vt];
        a[vt] = temp;

        for(int i = 0; i< n; i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n; scanf("%d", &n);
    for(int i = 0 ;i < n; i++) scanf("%d",&a[i]);
    sapxep(a,n);
    return 0;
}
