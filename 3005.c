#include <stdio.h>
#include <math.h>

int is_zs(int n){ //标准质数判断模块
    if (n==1)
    {
        return 0;
    }else{
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n%i==0)
            {
                return 0;
            }    
        }
        return 1;
    }
}

int main(){
    int m,k;
    scanf("%d%d",&m,&k);
    while (k>0)
    {
        if (is_zs(m)) //如果是质数，输出并减少计数器
        {
            printf("%d,",m);
            k-=1;
        }
        m+=1;
    }    
}