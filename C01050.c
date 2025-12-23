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
	int w,h; scanf("%d %d",&w,&h);
	FOR(i,1,h+1,1){
		FOR(j,1,w+1,1){
			if(j==1 || j==w || i == 1 || i == h){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
