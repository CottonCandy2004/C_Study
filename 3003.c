#include <stdio.h>

int main(){
    for (int i = 1; i < 10; i++)
    {
        for (int j = i; j > 1; j--)
        {
            printf("        ");
        }
        for (int p = i; p < 10; p++)
        {
            printf("%d*%d=%2d  ",i,p,i*p);
        }
        printf("\n");
    }
}