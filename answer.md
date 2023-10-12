#实验一
```C
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    return 0;
}
```
---
#实验二
```C
#include <stdio.h>

int exchange(int x){
    int result=0;
    while (x>0)
    {
        result=result*10+(x%10);
        x/=10;
    }
    return result;
}

int main(){
    int _i;
    scanf("%d",&_i);
    printf("%d+%d=%d",_i,exchange(_i),_i+exchange(_i));
    return 0;
}
```