# include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int str[60][5];
int cnt[30] = {0};
int main(){
    for(int i = 0; i < 30; i++) cnt[i] = 0;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char s[60];
    scanf("%s",s);
    int l = strlen(s);

    for(int i = 0; i < l; i++){
        int c = s[i] - 'A';
        str[c][cnt[c]++] = i;
    }
    /*for(int i = 0; i < 26; i++){
        for(int j = 0; j < 2; j++)
            printf("%d ",str[i][j]);

        printf("\n");
    }*/
    int kq = 0;
    for(int i = 0; i < 26;i++){
        for(int j = i+ 1; j < 26; j++){
            int a1 = str[i][0], a2 = str[i][1];
            int b1 = str[j][0], b2 = str[j][1];

            if(a1 > a2){
                int t = a1; a1 = a2; a2 = t;
            }
            if(b1 > b2){
                int t = b1; b1 = b2; b2 = t;
            }

            if((a1 < b1 && b1 < a2 && a2 < b2) || (b1 < a1 && a1 < b2 && b2 < a2)){
                kq++;
            }
        }
    }
    printf("%d",kq);

    return 0;
}
