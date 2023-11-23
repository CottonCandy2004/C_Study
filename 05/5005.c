#include <stdio.h>
#include <string.h>

void cat_rev(char s[])
{
    char buffer[128]={};
    for (int i = 0; i < strlen(s); i++)
    {
        buffer[i]=s[strlen(s)-i-1];
    }
    strcat(s,buffer);
}

int main()
{
    char s[256];
    gets(s);
    cat_rev(s);
    puts(s);
}