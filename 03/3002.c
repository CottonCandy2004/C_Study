#include <stdio.h>

int main(){
    char c='A';
    int number=0,letter=0,other=0; //声明累加器
    while ((c=getchar())!=EOF)
    {
        if (((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z'))) //分类判断类型
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