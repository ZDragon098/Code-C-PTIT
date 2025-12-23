#include<stdio.h>


int main(){
   	int x;
   	scanf("%d",&x);
   	printf("%d %d %d",x/365,x%365/7,x%365%7);
    return 0;
}
