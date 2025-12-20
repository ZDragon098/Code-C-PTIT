#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

#define ll long long
#define Nmax 100000
#define db double

int check1(char s[]){
    int n = strlen(s);
    for(int i = 0; i < n-1; i++){
        if(s[i] >= s[i+1]) return 0;
    }
    return 1;
}

int check2(char s[]){
    int n = strlen(s);
    for(int i = 0; i < n-1; i++){
        if(s[i] != s[i+1]) return 0;
    }
    return 1;
}

int check3(char s[6]){
    if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4]) return 1;
    return 0;
}

int check4(char s[]){
    int n = strlen(s);
    for(int i = 0; i < n-1; i++){
        if(s[i] != '6' && s[i] != '8') return 0;
    }
    return 1;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t; scanf("%d",&t); getchar();
    char dau[100],cuoi[100];
    while(t--){
        scanf("%s %s",dau,cuoi);
        cuoi[3]=cuoi[4];
        cuoi[4]=cuoi[5];
        cuoi[5]='\0';
        //printf("%s\n",cuoi);
        if(check1(cuoi) || check2(cuoi) || check3(cuoi)||check4(cuoi)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
