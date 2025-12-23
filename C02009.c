#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005
void sub(){
}

int main(){
    int h;scanf("%d", &h);
    int br = 1,tam = h-1;
    FOR(i,0,h,1){
        FOR(j,0,tam,1){
            printf("~");
        }
        tam--;
        FOR(j,0,br,1){
            //if(j == 0 || j == br-1 || i == 0 || i == h-1){
                printf("*");
            //}
            ///else{
               // printf(".");
            //}

        }
        br++;
        printf("\n");
    }
    return 0;
}
