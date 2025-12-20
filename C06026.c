//ZDragon

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100

struct string{
    char str[100];
    int cnt;
};

int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}

struct string s[10005];

int check(char s[]){
    int i = 0, j = strlen(s) - 1;
    while(i < j){
        if(s[i] != s[j]) return 0;
        i++, j--;
    }
    return 1;
}

int main(){
    for(int i = 0; i < 10000; i++){
        s[i].cnt = 0;
    }

    int k = 0,max_len = 0,max_cnt = 0;
    char word[1000];
    while(scanf("%s",word) != -1){
        if(check(word)){
            int f = 0;
            for(int i = 0; i < k; i++){
                if(strcmp(s[i].str,word) == 0){
                    s[i].cnt++;
                    f = 1;
                    break;
                }
            }
            if(!f){
                strcpy(s[k].str,word);
                s[k].cnt = 1;
                k++;
            }
        }
    }

    for(int  i =0; i < k; i++){
        //printf("%s %d\n",s[i].str,s[i].cnt);
        max_len = max(max_len,strlen(s[i].str));
    }

    //printf("%d",max_len);

    for(int i = 0; i < k; i++){
        if(strlen(s[i].str) == max_len){
            printf("%s %d\n",s[i].str,s[i].cnt);
        }
    }
    return 0;
}
