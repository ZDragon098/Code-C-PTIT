#include<stdio.h>

#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i>b;i-=k)

// nguyên tắc truyền tham trị
// nguyên tắc truyền tham chiếu

int tongcs(n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n; scanf("%d",&n);
    printf("%d",tongcs(n));

    return 0;
}
