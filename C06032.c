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

void sx(char s[25][25],int n){
    for(int i = 0; i < n -1; i++){
        int vt = i;
        char ab[50],ba[50];
        for(int j = i+1; j < n; j++){
            strcpy(ab,s[i]);
            strcat(ab,s[j]);

            strcpy(ba,s[j]);
            strcat(ba,s[i]);

            if(strcmp(ab, ba) > 0){
                char c[50];
                strcpy(c,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],c);
            }
        }
    }
}

int main(){

    int t,n; scanf("%d",&t);
    //getchar();
    char s[25][25];
    while(t--){
        scanf("%d", &n);
        getchar();
        for(int i = 0; i < n; i++){
            scanf("%s",s[i]);
        }
        sx(s,n);
        for(int i = 0; i < n; i++){
            printf("%s",s[i]);
        }
        printf("\n");
    }
    return 0;
}
