#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)

bool check(char c[]){
    int r = strlen(c)-1,l=0,sum = 0;
    if(c[0] != '8' || c[r]!= '8') return 0;
    while(l<=r){
        if(c[l] != c[r]) return 0;
        sum+= 2 * (int)(c[l]- 48);
        l++;r--;
    }
    if(sum % 10 != 0) return 0;
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
