// ZDragon

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void dao(char a[]){
    int i = 0, j = strlen(a)-1;
    while(i < j){
        char c = a[i];
        a[i] = a[j];
        a[j] = c;
        i++;j--;
    }

}

void cong(char a[], char b[]){
    char kq[505];
    dao(a),dao(b);
    int n = strlen(a), m = strlen(b);
    strcat(a,"0");
    for(int i = 0; i <= n - m; i++) strcat(b,"0");

    int nho = 0;
    for(int i = 0; i<= n; i++){
        int x = a[i] - '0', y = b[i] - '0';
        int t = x + y + nho;
        nho = t / 10; t = t % 10;
        kq[i] = t + '0';
    }
    if(kq[n] == '0') kq[n] = '\0';
    dao(kq);
    printf("%s\n",kq);
}


int main(){

    char a[505],b[505];
    int t; scanf("%d",&t);
    while(t--){
        scanf("%s%s",a,b);
        if(strlen(a) >= strlen(b)) cong(a,b);
        else cong(b,a);
    }

    return 0;
}
