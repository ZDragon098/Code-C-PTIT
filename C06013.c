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

int check(char s[], int c[]){
    if(s[0] == '0') return -1;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] < '0' || s[i] >'9'){
            return -1;
        }
        int k = s[i] - '0';
        c[k]++;
    }

    for(int i = 0; i <= 9; i++){
        if(c[i] == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int t; scanf("%d",&t);
    while(t--){
        int c[10],kt = 1;
        for(int i = 0; i<=9;i++) c[i] = 0;

        char s[1005];scanf("%s",s);
        if(check(s,c) == -1){
            printf("INVALID\n");
        }
        else if(check(s,c)){
            printf("YES\n");
        }
        else printf("NO\n");
    }


    return 0;
}
