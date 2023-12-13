#include <stdio.h>
#define N 10

void rev(int a[],int m,int n)
{
    int *l=&a[m-1],*r=&a[m+n-2];
    while (l<r)
    {
        char buff=*l;
        *l++=*r;
        *r--=buff;
    }
}

int main()
{
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    int m,n;
    scanf("%d%d",&m,&n);
    if (m+n>10)
    {
        n=N-m+1;
    }
    rev(a,m,n);
    for (int i = 0; i < N; i++)
    {
        printf("%d,",a[i]);
    }
}