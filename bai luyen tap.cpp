#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,S;
    printf("nhap gia tri cua x:");
    scanf("%f",&x);
    printf("nhap gia tri cau y:");
    scanf("%f",&y);
    if(y==0)
        printf("khong thoa man");
    else
    {
        S =(2 + pow(x,2)) / y;
        printf("bieu thuc S co gia tri la %.2f ",S);
    }
}
