#include <stdio.h>
#define N 10

void chosen(int *p,int n)
{
    int max,maxid;
    for (int j = 0; j < n-1 ; j++)
    {
        max=p[j];
        maxid=j;
        for (int i = j; i < n; i++)
        {
            if (p[i]>max)
            {
                max=p[i];
                maxid=i;
            }
        }
        int buffer=p[j];
        p[j]=p[maxid];
        p[maxid]=buffer;
    }
}

void sort(int a[N],int ud)
{
    if (ud==1)
    {
        for (int i = 0; i < N; i++)
        {
            a[i]=-a[i];
        }
        chosen(a,N);
        for (int i = 0; i < N; i++)
        {
            a[i]=-a[i];
        }
    }
    else
    {
        chosen(a,N);
    }
}

int main()
{
    int a[N],ud;
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&ud);
    sort(a,ud);
    for (int i = 0; i < N; i++)
    {
        printf("%d,",a[i]);
    }
    
    return 0;
}