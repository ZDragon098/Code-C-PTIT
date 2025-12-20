#include<stdio.h>

void nhap(int a[], int n){
    //for(int i = 0; i<= 1000; i++) a[i] = 0;
    for(int i = 0; i< n; i++){
        int x; scanf("%d",&x);
        a[x] = 1;
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
   	int n,m,a[1005]={0},b[1005]={0},x,i;

   	scanf("%d%d", &n,&m);
   	nhap(a,n);nhap(b,m);
   	for(i = 0; i<= 1000; i++){
        if(a[i] && b[i]) printf("%d ", i);
   	}
   	printf("\n");
   	for(i = 0; i<= 1000; i++){
        if(a[i] && !b[i]) printf("%d ", i);
   	}
   	printf("\n");
   	for(i = 0; i<= 1000; i++){
        if(!a[i] && b[i]) printf("%d ", i);
   	}
   	printf("\n");
    return 0;
}
