#include<stdio.h>

#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i>b;i-=k)
int main(){
    int n,m; scanf("%d%d", &n, &m);
    for(int i = 1; i<= n ; i++){
        printf("%d",i);
        for(int j = i+1; j<= m; j++){
            printf("%d",j);
        }
        if(i<=m){
            for(int j = i-1; j>=1; j--){
                printf("%d",j);
            }
            printf("\n");
        }
        else{

            for(int j = m-1 ; j>=1; j--){
                printf("%d",j);
            }
            printf("\n");
        }

    }

    return 0;
}
