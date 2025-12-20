//ZDragon

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<limits.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
#define FOR(i,a,b,k) for(int i = a; i< b; i+=k)
#define FOD(i,a,b,k) for(int i = a; i> b; i-=k)
#define Nmax 10000
int max(int a, int b){return ((a > b) ? a : b);}
int min(int a, int b) {return ((a < b) ? a : b);}
int a[Nmax+5], b[Nmax+5];

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void sapxeptang(int a[], int b[],int n,int m){
    int c[n+m+5],k=0;
    for(int i = 0; i< n; i++) c[k++] = a[i];
    for(int i = 0; i< m; i++) c[k++] = b[i];

    for(int i = 0; i < k; i++){
        int vt = i;
        for(int j = i+1; j< k; j++){
            if(c[vt] > c[j]) vt = j;
        }
        swap(&c[i], &c[vt]);
    }
     for(int i = 0; i< k; i++) printf("%d ",c[i]);
}

void sapxepgiam(int a[], int b[],int n,int m){
    int c[n+m+5],k=0;
    for(int i = 0; i< n; i++) c[k++] = a[i];
    for(int i = 0; i< m; i++) c[k++] = b[i];

    for(int i = 0; i < k; i++){
        int vt = i;
        for(int j = i+1; j< k; j++){
            if(c[vt] < c[j]) vt = j;
        }
        swap(&c[i], &c[vt]);
    }
     for(int i = 0; i< k; i++) printf("%d ",c[i]);
}

void a_b(int a[], int b[],int n,int m){
    int c[n+m+5],k=0;
    for(int i = 0; i< n; i++) c[k++] = a[i];
    for(int i = 0; i< m; i++) c[k++] = b[i];

    for(int i = 0; i< k; i++) printf("%d ",c[i]);
}
void b_a(int a[], int b[],int n,int m){
    int c[n+m+5],k=0;
    for(int i = 0; i< m; i++) c[k++] = b[i];
    for(int i = 0; i< n ; i++) c[k++] = a[i];

     for(int i = 0; i< k; i++) printf("%d ",c[i]);
}


int main(){
    int t; scanf("%d", &t);
    while(t--){
        int m,n;char c;
        scanf("%d %d %c", &n, &m, &c);
        for(int i = 0; i< n; i++) scanf("%d", &a[i]);
        for(int i = 0; i< m; i++) scanf("%d", &b[i]);
        if(c == 'T') sapxeptang(a,b,n,m);
        else if(c == 'G') sapxepgiam(a,b,n,m);
        else if(c == 'F') a_b(a,b,n,m);
        else if(c == 'A') b_a(a,b,n,m);
        printf("\n");
    }

    return 0;
}
