#include <stdio.h>

int main(){
    int a,n,num;
    scanf("%d%d",&a,&n);
    long long s=0;
    num=a;
    for (int i = 0; i < n; i++)
    {
        s+=num;
        num=num*10+a;
    }
    printf("%d",s);
}