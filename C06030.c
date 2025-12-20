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

typedef struct{
    char str[100];
    int length;
    int cnt;
}list;

list dem[1005];

int find(char s[],int k){
    for(int i = 0; i< k; i++){
        if(strcmp(dem[i].str,s) == 0) return i;
    }
    return -1;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    for(int i = 0; i<= 1000; i++) dem[i].cnt = 0;
    char token[10005];
    //printf("%s",s);
    int k = 0,max_length = 0;
    while(scanf("%s",token) != -1){
        max_length = max(max_length, strlen(token));
        int vt = find(token,k);
        if( vt!= -1){
            dem[vt].cnt++;
        }
        else{
            strcpy(dem[k].str,token);
            dem[k].cnt = 1;
            dem[k].length = strlen(token);
            k++;
        }

    }
    //printf("%d ",max_length);
    for(int i = 0; i<k; i++){
        if(dem[i].length == max_length)
        printf("%s %d %d\n",dem[i].str,dem[i].length, dem[i].cnt);
    }
    return 0;
}
