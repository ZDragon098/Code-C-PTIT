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

int my_strcmpi(char a[], char b[]){
    int l1 = strlen(a), l2 = strlen(b);
    if(l1 != l2) return 0;
    //l = strlen(a);
    for(int i = 0; i < l1; i++){
        if(tolower(a[i]) != tolower(b[i])){
            return 0;
        }
    }
    return 1;
}

char s[1005];
int main(){
    int t; scanf("%d",&t);
    getchar();
    char s1[205],s2[25],a[205][25];
    for(int i = 1; i <= t; i++){
        printf("Test %d: ",i);
        gets(s1);
        gets(s2);
        char *token = strtok(s1," ");
        int k = 0;
        while(token != NULL){
            if(my_strcmpi(token,s2)== 0) printf("%s ",token);
            token = strtok(NULL," ");
        }
        printf("\n");
    }
    return 0;
}
