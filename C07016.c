#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100000
#define db double



typedef struct{
    int ma;
    char ten[105];
    char birth[105];
    double diem;
}list;

list ds[1005];

int cmp(void const *a, void const *b){
    const list *x = (const list*)a;
    const list *y = (const list*)b;
    if(x->diem < y->diem) return 1;
    if(x->diem > y->diem) return -1;
    return 0;

}

int main(){

    int t; scanf("%d",&t);
    getchar();
    double max_diem = 0;
    for(int i = 0; i < t;i++){
        double a,b,c;
        ds[i].ma = i+1;
        gets(ds[i].ten);
        gets(ds[i].birth);
        scanf("%lf %lf %lf",&a,&b,&c);getchar();
        ds[i].diem = a + b +c;
        if(max_diem <ds[i].diem) max_diem = ds[i].diem;
    }
    qsort(ds,t,sizeof(list),cmp);
    for(int i = 0; i < t; i++){
        //if(ds[i].diem == max_diem){
                    printf("%d %s %s %.1lf\n",ds[i].ma,ds[i].ten,ds[i].birth,ds[i].diem);

        //}
    }
    return 0;
}
