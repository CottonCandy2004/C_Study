#include <stdio.h>
#define M 10

int low(int *score,int *below)
{
    double sum=0,avg=0;
    int *p=score,*s=below;
    for (int i = 0; i < M; i++)
    {
        sum+=*p++;
    }
    avg=sum/M;
    p=score;
    int people=0;
    for (int i = 0; i < M; i++,p++)
    {
        if (*p<avg)
        {
            *s++=*p;
            people++;
        }
    }
    return people;
}

int main()
{
    int score[M],below[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%d",&score[i]);
    }
    int num=low(score,below);
    printf("%d\n",num);
    for (int i = 0; i < num; i++)
    {
        printf("%d,",below[i]);
    }
}