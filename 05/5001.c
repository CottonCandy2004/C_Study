#include <stdio.h>

long long factorial(int m) //定义阶乘函数
{
    if (m==1)
    {
        return 1;
    }
    else
    {
        return m*factorial(m-1); //递归求阶乘
    }
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",factorial(m)/(factorial(n)*factorial(m-n)));
}