#include<stdio.h>
int main()
{
double x1, x2,y1,y2,p1,p2,r;
scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
p1=x2-x1;
p2=y2-y1;
r=sqrt((p1*p1) + (p2*p2));
printf("%0.4lf\n", r);
return 0;
}
