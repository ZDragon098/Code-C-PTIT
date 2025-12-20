//ZDragon

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100
struct string{
    char str[83];
};
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(char *a, char *b){
    char t = *a;
    *a = *b;
    *b = t;
}

void lower(char s[]){
    int l = strlen(s);
    for(int i = 0; i < l; i++){
        s[i] = tolower(s[i]);
    }
}

int main(){

    int t; scanf("%d",&t);
    getchar();
    while(t--){
        char s[1000];
        fgets(s,sizeof(s),stdin);
        s[strlen(s) - 1] = 0;
        char *item = strtok(s," ");
        while(item != NULL){
            lower(item);
            item[0] = toupper(item[0]);
            printf("%s ",item);
            item = strtok(NULL," ");
        }
        printf("\n");
    }
    return 0;
}
