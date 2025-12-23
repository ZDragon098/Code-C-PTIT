//ZDragon

#include<stdio.h>
#include<math.h>
int main(){
    int a,b; scanf("%d %d",&a,&b);
    int l = sqrt(a),r = sqrt(b);
    int cnt = 0,kq[1000005];
    for(int i = l; i<=r;i++){
        if(i * i < a) continue;
        if(i * i > b) break;
        kq[cnt++] = i*i;
    }
    printf("%d\n",cnt);
    for(int i = 0; i< cnt; i++){
        printf("%d\n",kq[i]);
    }
    return 0;
}
