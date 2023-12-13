#include <stdio.h>

int summon_list(int *p,int n)
{
    for (int i = 1; i <= n; i++)
    {
        *p++=i;
    }
    *p=-2;
}

int main()
{
    int n,m;
    int stu[100];
    scanf("%d%d",&n,&m);
    int num=1;
    summon_list(stu,n);
    int *p=&stu[n-1];
    for (int i = 0; i < n; i++)
    {
        while (num<=m)
        {
            p++;
            if (*p==-2)
            {
                p=stu;
            }
            if (*p != -1)
            {
                num++;
            }
        }
        num=1;
        printf("%d,",*p);
        *p=-1;
    }
}