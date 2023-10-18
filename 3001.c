#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double sum=0,fs;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fs=1;
        for (int p = 1; p <= i; p++)
        {
            fs*=p/(double)(2*p+1);
        }
        sum+=pow(-1,i+1)*fs;
    }
    printf("%.6lf",sum);
}