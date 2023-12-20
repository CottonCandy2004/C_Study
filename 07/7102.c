#include <stdio.h>
#define M 10

struct student
{
    int id;
    int score;
};

int fun(struct student *s, int low, int high, struct student *b)
{
    int num=0;
    for (int i = 0; i < M; i++)
    {
        if (s[i].score >= low && s[i].score <= high)
        {
            b[num++] = s[i];
        }
    }
    return num;
}

void input_stu(struct student s[])
{
    int i;
    for (i = 0; i < M; i++)
    {
        scanf("%d%d", &s[i].id, &s[i].score);
    }
}

void output(struct student s[], int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d,%d\n", s[i].id, s[i].score);
    }
}

int main()
{
    struct student s[M],b[M];
    input_stu(s);
    int low,high,num;
    scanf("%d%d", &low, &high);
    num=fun(s, low, high, b);
    output(b, num);
}