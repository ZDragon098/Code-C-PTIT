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

void upper(char s[]){
    int l = strlen(s);
    for(int i = 0; i < l; i++){
        s[i] = toupper(s[i]);
    }
}

struct string s[100];

int main(){

    int t; scanf("%d",&t);
    getchar();
    while(t--){
        char s[105]; fgets(s,sizeof(s),stdin);
        s[strlen(s)-1] = 0;
        lower(s);

        char words[55][55];
        int k = 0;

        char *item = strtok(s," ");
        while(item != NULL){
            strcpy(words[k++],item);
            item = strtok(NULL," ");
        }

        for(int i = 0; i < k; i++){
            words[i][0] = toupper(words[i][0]);
        }

        for(int i = 1; i < k; i++){
            printf("%s",words[i]);
            if(i < k - 1) printf(" ");
        }
        upper(words[0]);
        printf(", %s\n",words[0]);
    }
    return 0;
}
