#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005
void check1(int n, int m){

}


int main(){
	int a; scanf("%d", &a);
	int kq = 1;
	while(a>1){
		kq*=(a%10);
		a/=10;
	}
	printf("%d",kq);
	return 0;
}
