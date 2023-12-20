#include <stdio.h>

#define N 3  // 分数的个数
#define M 5  // 学生的个数

struct student
{
    int id;           // 学号
    char name[20];    // 姓名
    int score[N];     // 分数
    double average;   // 平均分
    int sum;          // 总分
};

void input_stu(struct student stu[])  // 输入学生信息
{
    int i;
    for (i = 0; i < M; i++)
    {
        stu[i].sum = 0;
        scanf("%d", &stu[i].id);  // 输入学号
        getchar();
        gets(stu[i].name);  // 输入姓名
        for (int p = 0; p < N; p++)
        {
            scanf("%d", &stu[i].score[p]);  // 输入分数
            stu[i].sum += stu[i].score[p];
        }
        stu[i].average = (double)stu[i].sum / N;  // 计算平均分
    }
}

void output_stu(struct student stu[], int i)  // 输出学生信息
{
    printf("%d,%s,", stu[i].id, stu[i].name);  // 输出学号和姓名
    for (int p = 0; p < N; p++)
    {
        printf("%d,", stu[i].score[p]);  // 输出分数
    }
    printf("%.2f\n", stu[i].average);  // 输出平均分
}

void output(struct student stu[])  // 输出所有学生信息
{
    int i;
    for (i = 0; i < M; i++)
    {
        output_stu(stu, i);  // 输出每个学生的信息
    }
    
    int max = stu[0].sum;  // 记录最高分的总分
    int maxid = 0;  // 记录最高分的学号
    for (int i = 0; i < M; i++)
    {
        if (max < stu[i].sum)  // 找到最高分
        {
            max = stu[i].sum;
            maxid = i;
        }
    }
    
    output_stu(stu, maxid);  // 输出最高分的学生信息
}

int main()
{
    struct student stu[M];  // 创建学生数组
    input_stu(stu);  // 输入学生信息
    output(stu);  // 输出学生信息
    return 0;
}