#include<stdio.h>
int main()
{
    double x,y,z;
    scanf("%lf%lf", &x, &y);

    if (x==1){
            z=y*4.00;
        printf("Total: R$ %0.2lf\n", z);
    }
    else if (x==2){
        z=y*4.50;
        printf("Total: R$ %0.2lf\n", z);
    }
    else if (x==3){
        z=y*5.00;
       printf("Total: R$ %0.2lf\n", z);
    }
    else if(x==4){
        z=y*2.00;
        printf("Total: R$ %0.2lf\n", z);
    }
    else if(x==5){
        z=y*1.50;
        printf("Total: R$ %0.2lf\n", z);
    }
    return 0;
}
