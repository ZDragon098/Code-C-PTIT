#include<stdio.h>
#include<string.h>
int main(){
	int n; scanf("%d", &n);

	for( int i = 0;i<n ; i++){
		char s[10];
		scanf("%s", s);
		int length = strlen(s);
		if(s[0] == s[length-1]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}


	return 0;
}
