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

int main(){

    char c[105],s[105][105];
    int cnt = 0, f = 1;
    fgets(c, sizeof(c), stdin);

    c[strlen(c)-1] = 0;
    char *strock = strtok(c," ");
    while(strock != NULL){
        int check = 1;
        for(int i = 0; i < cnt; i++){
            if(strcmp(s[i],strock) == 0){
                check = 0;break;
            }
        }
        if(check){
            strcpy(s[cnt++],strock);
            if(!f) printf(" ");
            printf("%s ",strock);
            f = 0;
        }
        strock = strtok(NULL, " ");
    }
    return 0;
}
