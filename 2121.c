#include <stdio.h>

int main(){
    float x=0,y=0;
    scanf("%f",&x);
    if (x<=0){
        y=-(x/3.00)+5;
    }else{
        if (x<=10){
            y=x/3.00;
        }else{
            if (x<=20){
                y=x/3.00-5;
            }else{
                y=x/3.00-10;
            }
        }
    }
    printf("%.2f",y);
}