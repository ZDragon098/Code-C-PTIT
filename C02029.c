//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<limits.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
#define Nmax 100
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}



int main(){

    int n; scanf("%d",&n);

    for(int i = 1; i<= n;i++){
        char c = 'A' + i - 1;
        int step = 4;
        for(int j = 1; j <= i; j++){
            printf("%c ",c);
            c+= step - j;
        }
        printf("\n");
    }
    return 0;
}
