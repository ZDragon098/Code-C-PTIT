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

void dao(char s[]){
    int i = 0, j = strlen(s) - 1;
    while(i < j){
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++; j--;
    }
}

void tru(char a[], char b[]){
    char kq[1005];
    int n = strlen(a), m = strlen(b);
    dao(a),dao(b);
    for(int i = 1; i<=n-m; i++){
        strcat(b,"0");
    }
    int du = 0;
    for(int i = 0; i < n; i++){
        int x = a[i] - '0', y = b[i] - '0',hieu;
        if(x < (y + du)){

            hieu = (x+10)  - (y + du);
            du = 1;
        }
        else{
            hieu = x - (y+du);
            du = 0;
        }
        kq[i] = hieu + '0';
    }
    int k = n;
    while(k > 1 && kq[k-1] == '0') k--;
    kq[k] = '\0';
    dao(kq);
    printf("%s\n",kq);
}

char s[1005];
int main(){
    int t; scanf("%d",&t);
    getchar();
    char s1[1005],s2[1005];
    while(t--){
        scanf("%s%s",s1,s2);
        //printf("%s %s\n",s1,s2);
        int l1 = strlen(s1), l2 = strlen(s2);
        if(l1 > l2) tru(s1,s2);
        else{
            if(l1 == l2){
                if(strcmp(s1,s2)>0){
                    tru(s1,s2);
                }
                else{
                    tru(s2,s1);
                }
            }
            else tru(s2,s1);
        }

    }
    return 0;
}
