#include <stdio.h>

int main(){
    int m,n,score,sum;
    scanf("%d%d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        sum=0;
        for (int p = 0; p < n; p++)
        {
            scanf("%d",&score);
            sum+=score;
        }
        printf("%.2f\n",sum/(double)n);
    }
}