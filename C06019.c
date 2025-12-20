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
void swap(char *a, char *b){
    char t = *a;
    *a = *b;
    *b = t;
}

void lower(char s[]){
    for(int i = 0; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}

int main(){

    char a[10][55],s[55];
    gets(s);

    char *token = strtok(s," "); int k = 0;
    while(token != NULL){
        strcpy(a[k++],token);
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < k - 1; i++){
        lower(a[i]);
        printf("%c",a[i][0]);
    }
    lower(a[k-1]);
    printf("%s@ptit.edu.vn",a[k-1]);
    return 0;
}
