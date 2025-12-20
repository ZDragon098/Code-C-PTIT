#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100000
#define db double
#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b
int main(){
    int x1,y1,x2,y2;
    int x3,y3,x4,y4;
    scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    int max_x = max(x2,x4), min_x = min(x1,x3);
    int max_y = max(y2,y4), min_y = min(y1,y3);
    int s = max(max_x - min_x,max_y - min_y);
    printf("%d ",s*s);

    return 0;
}
