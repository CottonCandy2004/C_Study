#include <stdio.h>
#include <math.h>

int isprime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void fun(int m,int k,int xx[])
{
    for (m++; k > 0; m++)
    {
        if (isprime(m))
        {
            *xx++=m;
            k--;
        }
    }
}

int main()
{
    int m,k;
    int xx[100];
    scanf("%d%d",&m,&k);
    fun(m,k,xx);
    for (int i = 0; i < k; i++)
    {
        printf("%d,",xx[i]);
    }
}