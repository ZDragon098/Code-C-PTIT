#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define ll long long


int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    while(scanf("%d",&n) == 1&& n != 0){
        char s1[n+5],s2[n+5],kq[2*n+5];
        scanf("%s %s %s",s1,s2,kq);
        char s[2*n +5],cpy_s1[n+5], cpy_s2[n+5];

        strcpy(cpy_s1,s1);
        strcpy(cpy_s2,s2);
        int cnt = 0;
        while(1){

            int i=0,j=0,k=0;
            while(i < n && j < n){
                s[k++] = s2[i++];
                s[k++] = s1[j++];
            }
            s[k] ='\0';
            cnt++;

            if(strcmp(s,kq) == 0){
                printf("%d\n",cnt);
                break;
            }

            strncpy(s1,s,n);s1[n] = '\0';
            strcpy(s2,s+n);s2[n]='\0';
            //printf("%s %s %s %s\n",s1,s2,s,kq);
            if(strcmp(cpy_s1,s1) == 0 && strcmp(cpy_s2,s2) == 0){
               printf("-1\n");break;
            }
        }
    }
    return 0;
}
