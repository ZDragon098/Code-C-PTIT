#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i<= n; i++){
		double k;
		scanf("%lf", &k);
		printf("%.15lf\n",1/k);
	}
	return 0;
}

