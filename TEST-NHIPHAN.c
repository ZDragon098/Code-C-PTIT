#include<stdio.h>
#include<math.h>

#define FOR(i,a,b,k) for(int  i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i > b; i-=k)
#define Nmax 69
int main(){
    int n,k=0; scanf("%d", &n);
    if(n == 0){printf("0"); return 0;}
    int a[Nmax];
    while(n>0){
        a[k++] = n % 2;
        n/=2;
    }
    for(int i = k-1; i>=0; i--){
        printf("%d",a[i]);
    }

    return 0;
}
