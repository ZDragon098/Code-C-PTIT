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

int ss(char a, char b){
    if(a == '(' && b == ')') return 1;
    if(a == '[' && b == ']') return 1;
    if(a == '{' && b == '}') return 1;
    return 0;
}

int check(char s[], int n){
    char stack[101];
    int top = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') stack[++top] = s[i];

        else{
            if(top == -1) return 0;

            if(!ss(stack[top],s[i])){
                return 0;
            }
            top--;
        }
    }
    if(top == -1) return 1;
    else return 0;
}

int main(){

    char s[101]; scanf("%s", s);
    int l = strlen(s);

    printf("%d",check(s,l));
    return 0;
}

