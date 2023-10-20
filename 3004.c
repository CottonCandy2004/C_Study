#include <stdio.h>

int main(){
    int n,output_repeat=2;
    scanf("%d",&n);
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < output_repeat; j++){ //2个三角形
            for (int p = 0; p < n-i; p++) //输出左侧空白
            {
                printf(" ");
            }
            for (int p = 0; p < i*2-1; p++) //输出符号
            {
                printf("*");
            }
            if (j!=(output_repeat-1)){
                for (int p = 0; p < n-i; p++) //输出右侧空白
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}