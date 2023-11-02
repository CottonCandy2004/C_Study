#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 4

int main()
{
    char map[N][128];
    for (int i = 0; i < N; i++)
    {
        gets(&map[i][0]);
    }
    for (int i = 0; i < N; i++)
    {
        int alpha=0,digit=0,other=0;
        for (int p = 0; p < strlen(&map[i][0]); p++)
        {
            if (isalpha(map[i][p])){
                alpha++;
            }else if(isdigit(map[i][p])){
                digit++;
            }else{
                other++;
            }
        }
        printf("%d,%d,%d\n",alpha,digit,other);
    }
}