#(1)
```c
#include <stdio.h>

int main()
{
    short score;
    scanf("%d",&score);
    if ((score>=90)&&(score<=100)){
        printf("A");
    }else if ((score>=80)&&(score<90)){
        printf("B");
    }else if ((score>=70)&&(score<80)){
        printf("C");
    }else if ((score>=60)&&(score<70)){
        printf("D");
    }else if ((score>=0)&&(score<60)){
        printf("E");
    }else{
        printf("ERROR");
    }
    return 0;
}
```
---
#(2)
```c
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
```
---
#(3)
```c
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
```
---
#(4)
```c
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
```