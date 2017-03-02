#include<stdio.h>
int main()
{
    double A,B,C,sum,avg;
    scanf("%lf%lf%lf", &A,&B,&C);
    sum=((A*2)+(B*3)+(C*5));
    avg=sum/(2+3+5);
    printf("MEDIA = %0.1lf\n", avg);
    return 0;
}
