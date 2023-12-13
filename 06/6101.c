#include <stdio.h>
#include <string.h>

void fun(char *s)
{
    char *l=s,*r=&s[strlen(s)-1];
    while (l<r)
    {
        char buff=*l;
        *l++=*r;
        *r--=buff;
    }
}

int main()
{
    char s[256];
    gets(s);
    fun(s);
    puts(s);
}