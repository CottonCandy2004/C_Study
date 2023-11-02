#include <stdio.h>
#define N 10

int main()
{
    int a[N+1]={10,20,30,40,50,60,70,80,90,100};
    int num;
    scanf("%d",&num);
    int i=0;
    for (i = 0; i < N; i++)
    {
        if (num<a[i])
        {
            break;
        }
    }
    if (i!=N)
    {
        for (int p = N; p >= i; p--)
        {
            a[p+1]=a[p];
        }
    }
    a[i]=num;
    for (int i = 0; i < N+1; i++)
    {
        printf("%d,",a[i]);
    }
    
}