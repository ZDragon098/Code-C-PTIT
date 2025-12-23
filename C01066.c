#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005
#define min(a,b) (a < b) ? a : b

int main(){
	int a,b,c;scanf("%d%d%d", &a, &b, &c);
	printf("%d",min(a,min(b,c)));
	return 0;
}
