#include <stdio.h>
#include <ctype.h>

int main()
{
    char b;
    FILE *p;
    p=fopen("upper.txt","w");
    if (p==NULL)
    {
        return -1;
    }
    while ((b=getchar())!='!')
    {
        if (isalpha(b))
        {
            b=toupper(b);
        }
        fputc(b,p);
    }
    fclose(p);
    p=fopen("upper.txt","r");
    while ((b=fgetc(p))!=EOF)
    {
        putchar(b);
    }
    fclose(p);
    return 0;
}