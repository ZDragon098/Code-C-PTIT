//ZDragon

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

double distance(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2-x1,2) + pow(y2-y1,2));
}

int main(){

    int t; scanf("%d",&t);
    while(t--){
        double x1,y1,x2,y2,x3,y3; scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        double c1 = distance(x1,y1,x2,y2),c2 = distance(x2,y2,x3,y3),c3 = distance(x1,y1,x3,y3);
        if(c1 + c2 > c3 && c1 + c3 > c2 && c2 + c3 > c1){
            printf("%.3lf\n",c1+c2+c3);
        }
        else{
            printf("INVALID\n");
        }

        //printf("%.3lf\n", + distance(x2,y2,x3,y3)+ distance(x1,y1,x3,y3));
    }
    return 0;
}
