//ZDragon

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>


#define ll long long
#define Nmax 100
struct number{
    int val;
    int fre;
};
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

struct number a[100005];

int check(int n){
    while(n >= 10){
        int k = n%10;
        if((n/10)%10 > k) return 0;
        n/=10;
    }
    return 1;
}

int find(struct number a[], int n,int x){
    for(int i = 0; i < n; i++){
        if(a[i].val == x) return i;
    }
    return -1;
}

int cmp(const void *a, const void *b){
    struct number *x = (struct number*)a;
    struct number *y = (struct number*)b;
    return y->fre - x->fre;
}

int main(){
    int n = 0,x;
    while(scanf("%d", &x) != -1){
        if(check(x)){
            int idx = find(a,n,x);
            if(idx != -1) a[idx].fre+=1;
            else{
                a[n].val = x;
                a[n].fre = 1;
                n++;
            }
        }
    }
    qsort(a,n,sizeof(struct number),cmp);
    for(int i = 0; i < n; i++){
        printf("%d %d\n", a[i].val, a[i].fre);
    }

    return 0;
}
