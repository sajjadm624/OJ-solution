#include<stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf", &a,&b,&c);
     if (a < b + c && b < a + c && c < a + b)
            {
        printf("Perimetro = %0.1lf\n", a+b+c);
    }
    else{
            d=0.5*c*(a+b);
        printf("Area = %0.1lf\n", d);
    }
    return 0;
}
