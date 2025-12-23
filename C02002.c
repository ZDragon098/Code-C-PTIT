#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005
void sub1(){

}
int main(){
    int n;scanf("%d", &n);
    int br = n -1;
    FOR(i,0,n,1){
        FOR(j,0,br,1){
            printf("~");
        }
        br--;
        FOR(j,0,n,1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
