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
    int h1,h2,h3,w1,w2,w3;
    scanf("%d %d %d %d %d %d",&h1,&w1,&h2,&w2,&h3,&w3);
    int t_s = h1*w1 + h2*w2 + h3*w3;
    int check = sqrt(t_s);
    if(check * check == t_s) printf("YES");
    else printf("NO");
    return 0;
}
