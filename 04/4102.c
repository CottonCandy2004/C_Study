#include <stdio.h>

int main()
{
    int map[10][10];
    int M,N;
    scanf("%d%d",&M,&N);
    for (int i = 0; i < M; i++)
    {
        for (int p = 0; p < N; p++)
        {
            map[i][p]=i*2*N+(p+1)*2;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int p = 0; p < M; p++)
        {
            printf("%6d",map[p][i]);
        }
        printf("\n");
    }
}