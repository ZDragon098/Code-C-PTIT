#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i< n; i++){
		long long k;
		scanf("%lld", &k);
		printf("%lld\n", k*k);
	}
	return 0;
}

