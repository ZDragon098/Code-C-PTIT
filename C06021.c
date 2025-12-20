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

void lower(char s[]){
    for(int i = 0; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}

int xuly(char s[]){
    int l = strlen(s),even = 0, odd = 0;
    if(s[0] == '0') return -1;
    for(int i = 0; i < l; i++){
        if('0' <= s[i] && s[i] <= '9'){
            int k = s[i] - '0';
            if(k % 2 == 0) even++;
            else odd++;
        }
        else{
            return -1;
        }
    }
    if((odd + even)%2 == 0 && even > odd) return 1;
    else if((odd + even) %2!= 0 && odd > even) return 1;
    else return 0;


}
char s[1005];
int main(){

    int t; scanf("%d",&t);
    while(t--){

        scanf("%s", s);
        //printf("%s \n",s);
        int k = xuly(s);
        if( k == -1) printf("INVALID\n");
        else if(k == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
