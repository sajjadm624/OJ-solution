#include<stdio.h>
int main()
{
     double a,b,c,avg,sum;
     int n,i;
     scanf("%d", &n);
     for(i=0;i<n;i++){
        scanf("%lf%lf%lf", &a,&b,&c);
        sum=(a*2)+(b*3)+(c*5);
        avg=sum/(2+3+5);
        printf("%0.1lf\n", avg);
     }
     return 0;
}
