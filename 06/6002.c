#include <stdio.h>
#include <ctype.h>

void fun(char s1[],char s2[])
{
    char *p=s1,*p2=s2;
    for (p=s1; *p != 0 ; p++)
    {
        if (isalpha(*p))
        {
            *p2++=*p;
        }
    }
    for (p=s1; *p != 0 ; p++)
    {
        if (isdigit(*p))
        {
            *p2++=*p;
        }
    }
    for (p=s1; *p != 0 ; p++)
    {
        if ((!isalpha(*p))&&(!isdigit(*p)))
        {
            *p2++=*p;
        }
    }
    *p2=0;
}

int main()
{
    char s1[128],s2[128];
    gets(s1);
    fun(s1,s2);
    puts(s2);
}