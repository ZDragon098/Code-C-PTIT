#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 10000
#define db double
#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b

int sum_poly[10005];

void xuly(char s[]){
    char *token = strtok(s," +");
    while(token != NULL){
        int hs,sm;
        sscanf(token,"%d*x^%d",&hs,&sm);
        sum_poly[sm]+=hs;
        token = strtok(NULL," +");
    }
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    char s1[100005],s2[100005];
    scanf("%d",&t);
    getchar();
    while(t--){
        for(int i = 0; i<=10000; i++) sum_poly[i]=0;
        gets(s1);
        xuly(s1);
        gets(s2);
        xuly(s2);

        int first = 1;
        for(int i =10000; i >=0; i--){
            if(sum_poly[i] != 0){
                if(!first){
                    printf("+ ");

                }
                printf("%d*x^%d ",sum_poly[i],i);
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
