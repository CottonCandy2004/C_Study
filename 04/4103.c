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
    char a[256]={},b[128];
    gets(a);
    gets(b);
    int n;
    scanf("%d",&n);
    int len=getcharlength(a);
    if (n>getcharlength(b))
    {
        n=getcharlength(b);
    }
    for (int i = 0; i < n; i++)
    {
        a[len+i]=b[i];
    }
    puts(a);
}