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

int dp[100];

void xuly(char s[]){
    int n = strlen(s),max_len = 0;
    for(int i = 0; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(s[j] < s[i] && dp[i] < dp[j] + 1){
                dp[i] = dp[j] + 1;
            }
        }
        max_len = max(dp[i],max_len);
    }
    printf("%d",26 - max_len);
}

int main(){

    char s[55];
    scanf("%s",s);
    xuly(s);
    return 0;
}
