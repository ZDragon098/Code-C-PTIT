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


int find(char c[][105],int k, char *s){
    for(int i = 0; i < k; i++){
        if(strcmp(c[i],s) == 0) return 1;
    }
    return 0;
}

void sapxep(char s[][105],int n){
    char temp[105];
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(strcmp(s[i],s[j]) > 0){
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
}


int main(){

    char s1[105], s2[105], a[3][105],b[3][105];
    fgets(s1,sizeof(s1),stdin);
    s1[strlen(s1)-1]=0;
    fgets(s2,sizeof(s2), stdin);
    s2[strlen(s2)-1] = 0;

    int n1=0,n2=0;

    char *ki_tu = strtok(s1," ");
    while(ki_tu != NULL){
        if(!find(a,n1,ki_tu)){
            strcpy(a[n1],ki_tu);
            n1++;
        }
        ki_tu = strtok(NULL," ");
    }

    char *item = strtok(s2," ");
    while(item != NULL){
        if(!find(b,n2,item)){
            strcpy(b[n2],item);
            n2++;
        }
        item = strtok(NULL," ");
    }

    sapxep(a,n1);

    for(int i = 0; i < n1; i++){
        if(!find(b,n2,a[i])){
            printf("%s ",a[i]);
        }
    }

    return 0;
}
