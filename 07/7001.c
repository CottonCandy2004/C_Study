#include <stdio.h>
struct date
{
    int year;
    int month;
    int day;
} dates;
int leap_year(int year)
{
    if (year % 400 == 0)
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else
        return 0;
}
int day_month_date(struct date dates)
{
    int month_date[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (leap_year(dates.year))
    {
        month_date[1]=29;
    }
    int days=0;
    for (int i = 0; i < dates.month-1; i++)
    {
        days+=month_date[i];
    }
    return days+=dates.day;
}
int main()
{
    scanf("%d%d%d", &dates.year, &dates.month, &dates.day);
    printf("%d",day_month_date(dates));
}