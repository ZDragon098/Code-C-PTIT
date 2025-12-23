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
	int n;scanf("%d", &n);
	FOR(i,0,n,1){
		char c[20];scanf("%s",c);
		int l = strlen(c),kq=1;
		FOR(i,1,l,1){
			if(c[i-1] > c[i]){
				kq = 0;
				break;
			}
		}
		if(kq== 0){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
	return 0;
}
