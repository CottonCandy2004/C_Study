# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

void fileinit()
{
	char s[128] = "dE#Fg45#-)8[|}" ;	
	int i = 0;
	FILE *from;

	for(i = 0; s[i]; i ++)
		s[i] -= 3;
	from=fopen("from.txt","w");
	fputs(s, from);
	fclose(from);
}

int main()
{
	FILE *from,*to;
	char ch;

	fileinit();
/*Programme Start From Here*/
    from = fopen("from.txt","r");
    to=fopen("to.txt","w+");
    if(from == NULL)
        return -1;
    while ((ch=fgetc(from))!=EOF)
    {
        if (isdigit(ch))
        {
            continue;
        }
        fputc(ch,to);
    }
    fclose(from);
    rewind(to);
    while ((ch=fgetc(to))!=EOF)
    {
        putchar(ch);
    }
    fclose(to);
/*Programme End Here*/
	return 0;
}