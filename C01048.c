#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005

void check1(char c){

}


int main(){
	char c[Nmax]; scanf("%s", c);
	int l = strlen(c),even = 0,odd = 0;
	FOR(i,0,l,1){
		int k =(int)c[i];
		if(k%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("%d %d",odd,even);
	return 0;
}
