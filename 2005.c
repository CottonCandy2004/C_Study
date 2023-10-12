#include <stdio.h>

int main(){
    char c;
    c=getchar();
    if (c>='a'&&c<='u')
    {
        c+=5;
    }else if (c>='v'&&c<='z')
    {
        c=c+5-26;
    }
    putchar(c);
    return 0;
}