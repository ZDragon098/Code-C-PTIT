#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define ll long long
#define Nmax 100005


int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char s[Nmax];
    scanf("%s",s);
    int l = strlen(s);
    char kq[Nmax];
    int k = 0;
    int max = 'a';
    for(int i = l-1; i>=0; i--){
        if(s[i] >= max){
            kq[k++] = s[i];
            max = s[i];
        }
    }
    for(int i = k-1; i>=0; i--){
        printf("%c",kq[i]);
    }
    return 0;
}
