#include <stdio.h>
int main()
{ int s,t,a,b;
 scanf("%d,%d",&a,&b);
 s = t = 1;
 if(a > 0) s = s + 1;
 if(a > b) t = s + t;
 else if(a == b) t = 5;
 else t = 2 * s;
 printf("t=%d",t);
 return 0;
}