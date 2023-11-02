#include <stdio.h>

int getcharlength(const char *p) //标准字符串长度读取 const防改
{
    int length=0;
    while (*p!='\0')
    {
        length++;
        p++;
    }
    return length;
}

int main()
{
    char s1[128],s2[128];
    gets(s1);
    for (int i = 0; i < getcharlength(s1); i++)
    {
        s2[getcharlength(s1)-1-i]=s1[i];
    }
    printf("%s",s2);
}