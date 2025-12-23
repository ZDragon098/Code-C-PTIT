#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)


int main(){
	int n; scanf("%d", &n);
	FOR(l,0,n,1){
		int k,i=2; scanf("%d", &k);
		while(k!=1 && i*i<=k){
			if(k%i==0){
				printf("%d ", i);
				k /= i;
				continue;
			}
			i++;
		}
		if(k>1){
			printf("%d", k);
		}
		printf("\n");
	}

	return 0;
}
