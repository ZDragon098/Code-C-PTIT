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
char L[] ="IVXLCDM";
int a[] = {1,5,10,50,100,500,1000};

int quy_doi(char c){
    for(int i = 0; i < 7; i++){
        if(L[i] == c) return i;
    }
}

void xuly(char s[]){
    int n = strlen(s),kq = a[quy_doi(s[n-1])];
    for(int i = n - 2; i >= 0; i--){
        int truoc = quy_doi(s[i]), sau = quy_doi(s[i+1]);
        if(a[truoc] < a[sau]) kq-=a[truoc];
        else kq+=a[truoc];
    }
    printf("%d\n",kq);

}

int main(){

    int t; scanf("%d",&t);

    char s[100];
    while(t--){
        scanf("%s",s);
        xuly(s);
    }
    return 0;
}
