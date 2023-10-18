#include <stdio.h>
#include <math.h>

int is_zs(int n){
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
        if (is_zs(m))
        {
            printf("%d,",m);
            k-=1;
        }
        m+=1;
    }    
}