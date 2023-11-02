#include <stdio.h>
#define N 13

int main()
{
    int a[N];
    double b[N-1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < N-1; i++)
    {
        b[i]=(double)a[i+1]/a[i];
    }
    for (int i = 0; i<(N-1)/3; i++) //虽然有点bug 但N=13嘛 就这样了
    {
        for (int p = 0; p < 3; p++)
        {
            printf("%8.2f",b[i*3+p]);
        }
        printf("\n");
    }
}