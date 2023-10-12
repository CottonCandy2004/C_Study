#include <stdio.h>

int main(){
    char ch=getchar();
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("America");
        break;
    case 'b':
    case 'B':
        printf("Britain");
        break;
    case 'c':
    case 'C':
        printf("China");
        break;
    default:
        printf("Country");
        break;
    }
    return 0;
}