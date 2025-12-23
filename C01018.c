#include<stdio.h>
#include<math.h>

int main(){
	int n;scanf("%d", &n);
	for(int i = 1; i<=n; i++){
		int k,kt; scanf("%d", &k);
		kt = (int)sqrt(k);
		if(kt*kt == k){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
