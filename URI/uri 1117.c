#include<stdio.h>
int main()
{
    double n,i,sum=0,e=0,avg;
    for(i=1;i>0;i++){
        scanf("%lf", &n);

        if(n>0 && n<=10){
            sum=sum+n;
            e=e+1;
        }
        else if(n<0 || n>10){
            printf("nota invalida\n");
        }
        if(e==2){
            break;
        }
    }
    avg=sum/2;
    printf("media = %0.2lf\n", avg);
    return 0;
}
