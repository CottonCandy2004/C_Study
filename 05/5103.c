#include <stdio.h>
#include <string.h>

void insert(char s1[],char s2[],char sh)
{
    int inputid=-1,lens1=strlen(s1),lens2=strlen(s2);
    for (int i = 0; i < lens1; i++)
    {
        if (s1[i]==sh)
        {
            inputid=i;
            break;
        }
    }
    if (inputid!=-1)
    {
        for (int i = lens1; i >= inputid+1; i--)
        {
            s1[i+lens2]=s1[i];
        }
        for (int i = 0; i < lens2; i++)
        {
            s1[inputid+1+i]=s2[i];
        }
    }    
}

int main()
{
    char s1[256],s2[128];
    char ch;
    gets(s1);
    gets(s2);
    ch=getchar();
    insert(s1,s2,ch);
    puts(s1);
}