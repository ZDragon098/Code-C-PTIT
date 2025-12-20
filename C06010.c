#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

#define FOR(i,a,b,k) for(int i = a; i< b; i++)

bool check(char s[]){
    int l = 0, r = strlen(s);
    while(l <= r){
        if(s[l] != s[r] && (int)(s[l] - 48) % 2 != 0 ) return 0;
        l++;r--;
    }
    return 1;
}

int main(){
     //'1' == 49
     //printf("%c", '1' - 48);
    int t; scanf("%d", &t);
    while(t--){
        char s[505];scanf("%s",s);
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
