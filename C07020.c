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
    char ten[105];
    int so_lan_tien_hoa;
}list;

list ds[1005];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,k=0,tong = 0,max_tien_hoa = 0; scanf("%d",&t);
    getchar();
    while(t--){
        int a,b;
        gets(ds[k].ten);
        scanf("%d %d",&a,&b);getchar();

        int cnt = 0;
        while(b >= a){
            cnt++;
            b-=a;
            b+=2;
        }
        ds[k].so_lan_tien_hoa = cnt;
        tong+=cnt;
        if(max_tien_hoa<ds[k].so_lan_tien_hoa) max_tien_hoa = ds[k].so_lan_tien_hoa;
        k++;
    }
    printf("%d\n",tong);
    for(int i = 0; i < k; i++){
        if(ds[i].so_lan_tien_hoa == max_tien_hoa){
            printf("%s \n",ds[i].ten);
            break;
        }
    }
    return 0;
}
