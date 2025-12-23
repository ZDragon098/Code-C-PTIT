#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)

int snt(int n){
	FOR(i,2,sqrt(n),1){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){

	int n; scanf("%d", &n);

	FOR(i,0,n,1){
		int kq = 1;
		int k;scanf("%d", &k);

			if(snt(k)){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}

	}
	return 0;
}
