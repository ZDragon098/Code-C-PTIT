#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005
int gt(int n){
	if(n<=1){
		return 1;
	}
	return n*gt(n-1);
}
void check1(char c){

}


int main(){
	int n,i=0,sum=0; scanf("%d", &n);
	int k = n;
	while(n>=1){
		sum+=gt(n%10);
		n/=10;
	}
	if(sum==k){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}
