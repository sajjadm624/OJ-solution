#include<stdio.h>
int main()
{
    double a,b,c,d,x,y;
    scanf("%lf%lf%lf", &a,&b,&c);

    d=(b*b) - (4*a*c);


    if(a!=0 && d>0){
            x= (-b + sqrt(d)) / (2*a);
    y= (-b - sqrt(d)) / (2*a);
    printf("R1 = %0.5lf\nR2 = %0.5lf\n",  x,  y);
    }
    else
        printf("Impossivel calcular\n");

    return 0;
}
