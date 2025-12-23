#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005
void check1(int n){
	int sum = 1;
	FOR(i,2,(int)sqrt(n)+1,1){
		if(n%i==0){
			sum = sum + i + (int)n/i;
		}
	}
//	printf("%d",sum);
	if(sum == n){
		printf("1");
	}
	else{
		printf("0");
	}
}


int main(){
	int n; scanf("%d", &n);
	check1(n);
	return 0;
}
