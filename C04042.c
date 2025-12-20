#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100000
#define db double


struct pair{
    int f;
    int s;
};

struct pair a[Nmax + 5];

int cmp(const void *a, const void *b){
    int x = ((struct pair*) a) -> f;
    int y = ((struct pair*) b) -> f;
    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}

int main(){

    int t; scanf("%d", &t);
    while (t--){
        int n; scanf("%d",&n);
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i].f);
            a[i].s = i;
        }
        qsort(a,n,sizeof(struct pair),cmp);


        int kq = -1, vt = INT_MAX,test = INT_MAX;
         for(int i = 1; i < n; i++){
            if(a[i].f == a[i-1].f){
                test = a[i-1].s < a[i].s ? a[i-1].s: a[i].s;
            }
            if(test < vt){
                vt = test;
                kq = a[i].f;
            }

         }
        if(kq == -1) printf("NO");
        else printf("%d ",kq);

        printf("\n");
    }
    return 0;
}
