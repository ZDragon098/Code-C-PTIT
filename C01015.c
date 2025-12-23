#include<stdio.h>
#include<math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	int delta = b * b - 4 * a * c;
	if(delta < 0){
		printf("NO");
	}
	else if(a==0){
		printf("NO");
	}
	else if(delta > 0){
		printf("%.2f %.2f",(double)(-b + sqrt(delta))/(2 * a),(double)(-b - sqrt(delta))/(2 * a));
	}
	else{

		printf("%.2f", (double)-b/(2*a));
	}
	return 0;
}

