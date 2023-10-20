#include <stdio.h>

int main(){
    for (int i = 1; i < 10; i++)
    {
        for (int j = i; j > 1; j--) //输出左下空白
        {
            printf("        ");
        }
        for (int p = i; p < 10; p++) //输出单行乘法表
        {
            if (p!=9)
            {
                printf("%d*%d=%2d  ",i,p,i*p);
            }else{
                printf("%d*%d=%2d",i,p,i*p);
            }
        }
        printf("\n");
    }
}