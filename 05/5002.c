#include <stdio.h>

void ball(int n,double *p,double *s) //使用指针带出2个数据，也可以用全局变量带出
{
    if (n==0)
    {
        *s=100;
    }
    else
    {
        ball(n-1,p,s);
        *s/=2.0;
        *p+=3*(*s);
    }
}

int main()
{
    int n;
    double sum=0,last=0;
    double *p=&sum,*s=&last;
    scanf("%d",&n);
    ball(n,p,s);
    printf("%.4f,%.4f",*s,*p);
}