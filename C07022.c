#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 10000
#define db double
#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b

typedef struct{
    int ma_sinh_vien;
    char ten[100];
    double a,b,c,diem;
} info;
info thong_tin[1000];


int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n = 0,k=1;
    while(n != 3){
        scanf("%d",&n);
        if(n == 1){
            int x; scanf("%d", &x);
            printf("%d\n",x);
            while(x--){
                getchar();
                thong_tin[k].ma_sinh_vien = k;
                gets(thong_tin[k].ten);
                scanf("%lf %lf %lf",&thong_tin[k].a,&thong_tin[k].b,&thong_tin[k].c);
                thong_tin[k].diem = thong_tin[k].a + thong_tin[k].b + thong_tin[k].c;
                k++;
            }
        }
        if(n == 2){
            int x; scanf("%d",&x);
            printf("%d\n",x);
            getchar();
            gets(thong_tin[x].ten);
            scanf("%lf %lf %lf",&thong_tin[x].a,&thong_tin[x].b,&thong_tin[x].c);
            thong_tin[x].diem = thong_tin[x].a + thong_tin[x].b + thong_tin[x].c;
            getchar();
        }

        if(n == 3){

            for(int i = 1; i < k; i++){
                if(thong_tin[i].a < thong_tin[i].b &&  thong_tin[i].b < thong_tin[i].c)
                printf("%d %s %.1lf %.1lf %.1lf\n",thong_tin[i].ma_sinh_vien,thong_tin[i].ten,thong_tin[i].a,thong_tin[i].b,thong_tin[i].c);
            }
        }
    }
    return 0;
}
