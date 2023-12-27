#include <stdio.h>
#define N 3
#define M 5

struct student
{
    int id;
    char name[20];
    int score[N];
    double average;
    int sum;
};
void input_stu(struct student stu[])
{
    int i;
    for (i = 0; i < M; i++)
    {
        stu[i].sum = 0;
        scanf("%d", &stu[i].id);
        getchar();
        gets(stu[i].name);
        for (int p = 0; p < N; p++)
        {
            scanf("%d", &stu[i].score[p]);
            stu[i].sum += stu[i].score[p];
        }
        stu[i].average = (double)stu[i].sum / N;
    }
}

void output_stu(struct student stu[],int i)
{
    printf("%d,%s,",stu[i].id, stu[i].name);
    for (int p = 0; p < N; p++)
    {
        printf("%d,", stu[i].score[p]);
    }
    printf("%.2f\n", stu[i].average);
}

void output(struct student stu[])
{
    int i;
    for (i = 0; i < M; i++)
    {
        output_stu(stu,i);
    }
    int max=stu[0].sum,maxid=0;
    for (int i = 0; i < M; i++)
    {
        if (max < stu[i].sum)
        {
            max=stu[i].sum;
            maxid=i;
        }
    }
    output_stu(stu,maxid);
}

int main()
{
    struct student stu[M];
    input_stu(stu);
    output(stu);
}