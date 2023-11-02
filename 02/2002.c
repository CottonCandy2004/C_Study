#include <stdio.h>

int main()
{
    char ch=getchar();
    if ((ch=='A')||(ch=='a')){
        printf("America");
    }else if ((ch=='B')||(ch=='b')){
        printf("Britain");
    }else if ((ch=='C')||(ch=='c')){
        printf("China");
    }else{
        printf("Country");
    }
    return 0;
}