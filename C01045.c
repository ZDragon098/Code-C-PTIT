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
	int l = strlen(c);
	printf("%c %c",c[0],c[l-1]);
	return 0;
}
