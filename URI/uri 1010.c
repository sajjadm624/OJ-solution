#include<stdio.h>
int main()
{
int a,b,c,d;
double w,x,y;
scanf("%d %d %lf", &a, &b, &w);
scanf("%d %d %lf", &c, &d, &x);
y=(w*b)+(x*d);
printf("VALOR A PAGAR: R$ %0.2lf\n", y);
return 0;
}
