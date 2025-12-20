#include<stdio.h>

int thuan_nghich(int n){
    int N = n, z = 0,sum = 0,kt_so_6 = 0;
    while(n>0){
        if(n%10 == 6) kt_so_6 = 1;
        sum += n%10;
        z = z * 10 + n % 10;
        n/=10;
    }
    return N == z && kt_so_6 && sum % 10 == 8;
}

int main(){
    int a,b;scanf("%d%d",&a,&b);
    if (a > b){
        int k = a;
        a = b; b = k;
    }
    int cnt = 0;
    for(int i = a; i<= b;i++){
        if(thuan_nghich(i)) printf("%d ",i);
    }
    //printf("%d",cnt);
    return 0;
}
