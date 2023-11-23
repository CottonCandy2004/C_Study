#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

long long htod(char s[])
{
    long long sum=0;
    for (int i = strlen(s)-1; i >= 0; i--,s++)
    {
        if (isdigit(*s))
        {
            sum+=(*s-48)*pow(16,i);
        }
        else
        {
            sum+=(*s-87)*pow(16,i);
        }
    }
    return sum;
}

int main()
{
    char s[128];
    gets(s);
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (isalpha(s[i]))
        {
            s[i]=s[i]|32;
        }
    }
    printf("%d",htod(s));
}