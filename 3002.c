#include <stdio.h>

int main(){
    char c;
    int number=0,letter=0,other=0;
    while (1)
    {
        c=getchar();
        if (c=='\n')
        {
            break;
        }
        if (((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z')))
        {
            letter+=1;
        }else if ((c>='0')&&(c<='9'))
        {
            number+=1;
        }else{
            other+=1;
        }
    }
    printf("%d,%d,%d",letter,number,other);
}