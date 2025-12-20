#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
ll be_nhat(char a[]){
    ll res = 0;
    for(int i = 0; i< strlen(a); i++){
        int x = a[i] - '0';
        if(x == 6) x = 5;
        res = res * 10 + x;
    }
    return res;
}

ll lon_nhat(char a[]){
    ll res = 0;
    for(int i = 0; i< strlen(a); i++){
        int x = a[i]- '0';
        if(x == 5) x = 6;
        res = res * 10 + x;
    }
    return res;
}

long long thuan_nghich(long long n)
{
    long long dao=0;
    while(n>0)
    {
        dao=dao*10+n%10;
        n/=10;
    }
    return dao;
}
long long doi_5_sang_6(long long n)
{
    long long kq=0;
    while(n>0)
    {
        ll m=n%10;
        if(m!=5) kq=kq*10+m;
        else kq=kq*10+6;
        n/=10;
    }
    return thuan_nghich(kq);
}

long long doi_6_sang_5(long long n)
{
    long long kq=0;
    while(n>0)
    {
        ll m=n%10;
        if(m!=6) kq=kq*10+m;
        else kq=kq*10+5;
        n/=10;
    }
    return thuan_nghich(kq);
}

void sol1(){
    char a[20],b[20];scanf("%s%s",a,b);
    printf("%lld %lld\n", be_nhat(a) + be_nhat(b), lon_nhat(a)+ lon_nhat(b));
}
void sol2(){
    long long n, m;
    scanf("%lld %lld", &n, &m);
    printf("%lld %lld", doi_6_sang_5(n)+doi_6_sang_5(m), doi_5_sang_6(n)+doi_5_sang_6(m));
    printf("\n");
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        sol2();
    }
    return 0;
}
