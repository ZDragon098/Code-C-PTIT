#include<stdio.h>
#define ll long long

ll f[105];
void fibonacci(){
    f[0]=0;f[1]=f[2]=1;
    for(int i = 3; i<= 92; i++){
        f[i]=f[i-1]+f[i-2];
    }
}
int main(){
    fibonacci();
    int t; scanf("%d", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        int kq = 0;
        for(int i = 0; i<= 92; i++){
            if(f[i]==n){
                kq=1;break;
            }
        }
        if(kq) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
