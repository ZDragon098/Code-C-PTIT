#include<stdio.h>
int tong_chu_so(int a){
	int sum = 0;
    while (a>0){
    	sum += a % 10;
    	a /=10;
	}
	return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i= 1; i<=n; i++){
    	int k;scanf("%d",&k);
    	printf("%d\n",tong_chu_so(k));
	}
    return 0;
}
