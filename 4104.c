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
    char a[256],b[128];
    gets(a);
    gets(b);
    int max=a[0],maxid=0;
    int alength=getcharlength(a),blength=getcharlength(b);
    for (int i = 0; i < alength; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
            maxid=i;
        }
    }
    for (int i = alength; i > maxid; i--)
    {
        a[i+blength]=a[i];
    }
    for (int i = 0; i < blength; i++)
    {
        a[maxid+i+1]=b[i];
    }
    puts(a);
}