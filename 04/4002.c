#include <stdio.h>
#define M 4
#define N 6

int main()
{
    double score[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int p = 0; p < N; p++)
        {
            scanf("%lf",&score[i][p]);
        }
    }
    for (int i = 0; i < M; i++)
    {
        double sum=0;
        for (int p = 0; p < N; p++)
        {
            printf("%7.2f",score[i][p]);
            sum+=score[i][p];
        }
        printf("%7.2f\n",sum/N);
    }
    for (int i = 0; i < N; i++)
    {
        double sum=0;
        for (int p = 0; p < M; p++)
        {
            sum+=score[p][i];
        }
        printf("%7.2f",sum/M);
    }
    
}