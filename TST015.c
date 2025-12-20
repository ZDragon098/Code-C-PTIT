#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100
#define db double

struct tri{
    db a;
    db b;
    db c;
    db s;
};

int cmp(const void *a, const void *b){
    const struct tri* x = (const struct tri*)a;
    const struct tri* y = (const struct tri*)b;

    if (x->s < y->s) return -1;
    if (x->s > y->s) return 1;
    return 0;
}

int main(){

    freopen("FPLSP22GxxmsvTG.fpl","w", stdout);

    struct tri triangle[105];
    int t; scanf("%d",&t);

    int k = 0;
    while(t--){
        scanf("%lf %lf %lf", &triangle[k].a, &triangle[k].b, &triangle[k].c);
        double p = (triangle[k].a + triangle[k].b + triangle[k].c) / 2;
        triangle[k].s = sqrt(p * (p - triangle[k].a) * (p - triangle[k].b) * (p - triangle[k].c));
        k++;
    }

    qsort(triangle, k, sizeof(struct tri), cmp);

    for(int i = 0; i < k; i++){
        printf("%.0lf %.0lf %.0lf\n",
               triangle[i].a, triangle[i].b, triangle[i].c);
    }
    return 0;
}
