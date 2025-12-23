#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i< b; i-=k)
#define Nmax 100005

int main(){
	char c[Nmax];scanf("%s", c);
	int l = strlen(c);
	char k = c[0];
	c[0]=c[l-1];
	c[l-1]=k;

	int i = 0;
	if(c[i]=='0'){i++;}
	while(i<l){
		printf("%c",c[i]);
		i++;
	}
	return 0;
}
