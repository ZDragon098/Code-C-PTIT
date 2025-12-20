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
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int s[500];
void sang(){
    for(int i = 0; i <= 500; i++) s[i] = 1;
    s[0]=s[1] = 0;
    for(int i = 2; i * i <=500; i++){
        if(s[i]){
            for(int j = i * i; j<=500; j+=i) s[j] = 0;
        }
    }
}

int find(int s[], int k){
    for(int i = k; i<= 500; i++){
        if(s[i] == 1) return i;
    }
}
int a[105][105];

void in(int a[105][105], int n){
    for(int i = 0; i <n;i++){
        for(int j = 0; j < n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void xuly(int n){
    sang();
    int k = 2,b = 0;
    while(b <= n / 2){
        for(int i = b; i < n-b; i++){
            a[b][i] = find(s,k);
            k = find(s,k) +1;
             //printf("%d ",a[b][i]);
        }
        for(int i = b + 1; i < n - b; i++){
            a[i][n-b-1] = find(s,k);
            k = find(s,k) +1;
            //printf("%d ",a[i][n-b-1]);
        }
        for(int i = n - b - 2; i>= b; i--){
            a[n-b-1][i] = find(s,k);
            k = find(s,k) +1;
            //printf("%d ",a[n-b-1][i]);
        }
        for(int i = n - b -2; i>= b+1; i--){
            a[i][b] = find(s,k);
            k = find(s,k) +1;
            //printf("%d ",a[i][b]);
        }
        b++;
    }
    in(a,n);
}


int main(){

    int t; scanf("%d",&t);
    for(int i = 1; i<= t; i++){
        int n; scanf("%d", &n);
        printf("Test %d:\n",i);
        xuly(n);
    }

    return 0;
}
