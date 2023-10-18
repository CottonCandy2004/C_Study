#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < 2; j++){
            for (int p = 0; p < n-i; p++)
            {
                printf(" ");
            }
            for (int p = 0; p < i*2-1; p++)
            {
                printf("*");
            }
            for (int p = 0; p < n-i; p++)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}