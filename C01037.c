#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005

int main(){
	int a,b; scanf("%d%d", &a, &b);
	int sum = 0;
	if(a>b){
		int k = a;
		a = b;
		b = k;
	}
	int n = (b-a+1);
	printf("%d",(n * (a + b ))/2);
	return 0;
}
