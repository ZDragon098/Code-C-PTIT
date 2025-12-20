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
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

ll chuyen(char c[]){
    ll z = 0;
    for(int i = 0; i< strlen(c); i++){
        z = z * 10 + (ll)(c[i] - '0');
    }
    return z;
}

int main(){
    int t; scanf("%d", &t);
    getchar();
    while(t--){
        ll even = 0, odd = 0,cnt = 0;
        char c[10005];
        fgets(c,sizeof(c), stdin);
        char *token = strtok(c," \n");
        while(token != NULL){
            if(token[0] != '\0'){
                ++cnt;
                if(chuyen(token) % 2 ) odd++;
                else even++;
            }
            token = strtok(NULL," \n");
        }
        if(cnt % 2 == 0 && even > odd)
            printf("YES\n");
        else if(cnt % 2 != 0 && odd > even)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
