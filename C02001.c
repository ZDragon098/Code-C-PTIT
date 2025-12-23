#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005

void check1(int n){

}


int main(){
	int n; scanf("%d", &n);
	FOR(i,0,n,1){
		FOR(j,0,n,1){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
