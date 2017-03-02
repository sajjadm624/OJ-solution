#include<stdio.h>
int main()
{
double a,b,c,d,e,f,g,h;
scanf("%lf %lf %lf", &a, &b, &c);
d=0.5*a*c;
e=3.14159*c*c;
f=((a+b)/2)*c;
g=b*b;
h=a*b;
printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", d,e,f,g,h);
return 0;
}
