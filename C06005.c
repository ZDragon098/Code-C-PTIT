//ZDragon

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100

struct num{
    char val[51];
    int cnt;
};

int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(char *a, char *b){
    char t = *a;
    *a = *b;
    *b = t;
}


struct num a[101];
int k = 0;

void lower(char s[]){
    int l = strlen(s);
    for(int i = 0; i < l ; i++){
        if('A' <= s[i] && s[i] <= 'Z'){
            s[i]+=32;
        }
    }
}

int main(){


    char s[101];
    fgets(s,sizeof(s), stdin);
    s[strlen(s)- 1] = 0;

    char *item = strtok(s," ");
    while(item != NULL){
        lower(item);
        int kt = 1;
        for(int j = 0; j < k; j++){
            if(strcmp(a[j].val, item) == 0){
                a[j].cnt++; kt = 0;
                break;
            }
        }
        if(kt){
            strcpy(a[k].val,item);
            a[k].cnt = 1;
            k++;
        }
        item =  strtok(NULL," ");
    }


    for(int i = 0; i< k; i++){
        printf("%s %d\n", a[i].val, a[i].cnt);
    }
    return 0;
}
