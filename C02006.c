#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005
void sub1(int n, int br){
    FOR(i,0,n,1){
        FOR(j,0,br,1){
            printf("~");
        }
        br--;
        FOR(j,0,n,1){
            if(j == 0 || j == n-1 || i == 0 || i == n-1){
                printf("*");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
}

void sub2(int n, int m){
    int br = 0;
    FOR(i,0,n,1){
        FOR(j,0,br,1){
            printf("~");
        }
        br++;
        FOR(j,0,m,1){
            if(j == 0 || j == m-1 || i == 0 || i == n-1){
                printf("*");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
}

int main(){
    int r,cl;scanf("%d%d", &r,&cl);

    sub2(r,cl);
    return 0;
}
