#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005

void check1(int n){
	int cnt = 0;
	FOR(i,1,(int)sqrt(n)+1,1){
		if(n%i==0){
			if(i%2==0){
				cnt++;
			}
			int tam =n/i;
			if( i*i != n && tam % 2==0){
				cnt++;
			}
		}
	}
	printf("%d\n",cnt);
}


int main(){
	int n;scanf("%d", &n);
	FOR(i,0,n,1){
		int k; scanf("%d", &k);
		check1(k);
	}
	return 0;
}
