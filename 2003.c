#include <stdio.h>

int main(){
    short score;
    scanf("%d",&score);
    switch ((score+10)/10)
    {
    case 10:
        printf("A");
        break;
    case 9:
        printf("B");
        break;
    case 8:
        printf("C");
        break;
    case 7:
        printf("D");
        break;
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
        printf("E");
        break;
    default:
        if (score==100)
        {
            printf("A");
        }else{
            printf("ERROR");
        }
        break;
    }
    return 0;
}