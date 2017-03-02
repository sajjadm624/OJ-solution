#include<stdio.h>
int main()
{
    double A,B,sum,avg;
    scanf("%lf%lf", &A,&B);
    sum=((A*3.5) + (B*7.5));
    avg=sum / (3.5+7.5);
    printf("MEDIA = %0.5lf\n", avg);
    return 0;
}
