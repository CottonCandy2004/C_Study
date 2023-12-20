#include <stdio.h>
#define M 10

struct stu
{
    int id;
    char name[20];
    int birth_year;
    int age;
};

void input_stu(struct stu stus[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &stus[i].id);
        getchar();
        gets(stus[i].name);
        scanf("%d", &stus[i].birth_year);
    }
}

void process(struct stu stus[],int n, int year)
{
    for(int i=0 ; i<n; i++){
        stus[i].age = year - stus[i].birth_year;
    }
}

void output_age_over_20(struct stu stus[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (stus[i].age > 20)
        {
            printf("%d,%s,%d,%d\n", stus[i].id, stus[i].name, stus[i].birth_year, stus[i].age);
        }
    }
}

int main()
{
    struct stu stus[M];
    input_stu(stus, M);
    int year;
    scanf("%d", &year);
    process(stus, M, year);
    output_age_over_20(stus, M);
}