#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
int checkngto(int n){
    if(n == 2 || n == 3 || n == 5 || n == 7) return 1;
    return 0;
}

bool check(char c[]){
    int r = strlen(c)-1,l=0;
    while(l<=r){
        if(c[l] != c[r]) return 0;
        if(checkngto((int)(c[l]-48)) == 0) return 0;
        l++;r--;
    }
    return 1;
}
char c[505];
int main(){
    int t; scanf("%d", &t);
    while(t--){
        scanf("%s",c);
        if(check(c)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
