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

int check(char s[]){
    int i = 0, j = strlen(s) - 1,cnt = 0;

    while(i<=j){
        if(s[i] != s[j]) cnt++;
        i++; j--;
    }
    if(cnt > 1) return 0;
    if(cnt == 1) return 1;
    if(cnt == 0){
        if(strlen(s) % 2 == 0) return 0;
        else return 1;
    }
}

int main(){

    int t; scanf("%d",&t);
    //getchar();
    char s[25];
    while(t--){
        scanf("%s",s);
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
