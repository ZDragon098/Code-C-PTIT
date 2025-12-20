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

    char s1[105],s2[105];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    s1[strlen(s1)-1] = 0;
    s2[strlen(s2)-1] = 0;

    char *stock = strtok(s1," ");
    int dem = 0,f = 1;
    while(stock != NULL){
        dem++;
        if(strcmp(stock,s2) != 0){
            if(!f) printf(" ");
            printf("%s ",stock);
            f = 0;
        }
        stock = strtok(NULL," ");
    }
    //printf("%d",dem);
    return 0;
}
