#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)

int check(int a, int b){
	while(b!=0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int n; scanf("%d", &n);
	FOR(i,0,n,1){
		int a,b;scanf("%d%d",&a,&b);
		printf("%d\n", check(a,b));
	}
	return 0;
}
