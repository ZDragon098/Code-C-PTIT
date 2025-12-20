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

void dao(char a[]){
    int l = 0, r = strlen(a)-1;
    while(l < r){
        swap(&a[l],&a[r]);
        l++; r--;
    }
}
// strlen(a) > strlen(b)
void tong_so_lon(char a[], char b[], char sum[]){
    char A[205],B[205];
    strcpy(A,a);strcpy(B,b);

    int n = strlen(A), m = strlen(B);
    int i = n-1, j = m-1, k = 0, du = 0;
    char temp[205];

    while(i >=0 || j >= 0 || du){
        int x = (i >= 0 ? A[i] - '0' : 0);
        int y = (j >= 0 ? B[j] - '0' : 0);
        int s = x + y + du;
        temp[k++] = s % 10 + '0';
        du = s/10;
        i--,j--;
    }
    //if (du > 0) temp[k] = du + '0'
    //printf("%s",temp);
    //temp[k] = '\0';
    int l = 0;
    for(int i = k-1; i >=0; i--){
        sum[l++] = temp[i];
    }
    sum[l] = '\0';
}
int main(){

    char s[205]; scanf("%s",s);

    while(strlen(s) > 1){
        int l = strlen(s);
        int mid = l/2;
        char a[205], b[205], sum[205];
        strncpy(a,s,mid); a[mid] = '\0';
        strcpy(b,s+mid);
        //printf("%s %s", a,b);
        tong_so_lon(a,b,sum);
        printf("%s\n",sum);
        strcpy(s,sum);
        //printf("%d", strlen(s));
    }
    return 0;
}
