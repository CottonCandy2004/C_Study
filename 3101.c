#include <stdio.h>
#include <math.h>

int main(){
    int n,day=1,num=0;
    scanf("%d",&n);
    while (1)
    {
        num+=pow(2,day);
        if (num>n)
        {
            num-=pow(2,day);
            break;
        }else{
            day+=1;
        }
    }
    printf("%.2f",0.8*num/(double)(day-1));
}