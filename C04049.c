//ZDragon

#include<stdio.h>
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return (a / gcd(a,b) ) * b;
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t; scanf("%d", &t);
	while(t--){
        int n; scanf("%d",&n);
        int a[n+5],b[n+5];
        for(int i = 0; i< n; i++){
            scanf("%d",&a[i]);
        }
        b[0]=a[0];
        for(int i = 1;i < n; i++){
            b[i] = lcm(a[i-1],a[i]);
        }
        b[n] = a[n-1];
        for(int i = 0; i <= n; i++){
            printf("%d ",b[i]);
        }
        printf("\n");
	}
	return 0;
}
