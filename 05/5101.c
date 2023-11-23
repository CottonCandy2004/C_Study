#include <stdio.h>

double fun(int n,double x)
{
    if (n<=1)
    {
        if (n)
        {
            return x;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return ((2*n-1)*x-fun(n-1,x)-(n-1)*fun(n-2,x))/(double)n;
    }
}

int main()
{
    int n;
    double x;
    scanf("%d%lf",&n,&x);
    printf("%.2f",fun(n,x));
}