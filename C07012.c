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
    char ten_hang[105];
    char nhom_hang[105];
    double loi_nhuan;
}thu_muc;

thu_muc a[1005];

int cmp(void const *a, void const *b){
    const thu_muc* x = (const thu_muc *)a;
    const thu_muc* y = (const thu_muc *)b;
    if(x->loi_nhuan < y->loi_nhuan) return 1;
    if(x->loi_nhuan > y->loi_nhuan) return -1;
    return 0;
}
int main(){

    int t; scanf("%d",&t);
    getchar();
    for(int k = 0; k < t;k++){
        double x,y;
        a[k].ma = k+1;
        gets(a[k].ten_hang);
        gets(a[k].nhom_hang);
        scanf("%lf %lf",&x,&y);
        getchar();
        a[k].loi_nhuan = y - x;
    }
    qsort(a,t,sizeof(thu_muc),cmp);
    for(int k = 0; k < t; k++){
        printf("%d %s %s %.2lf\n",a[k].ma,a[k].ten_hang,a[k].nhom_hang,a[k].loi_nhuan);
    }
    return 0;
}
