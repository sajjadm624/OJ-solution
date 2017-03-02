#include<stdio.h>
int main()
{
    char name;
    double salary,value,total;
    scanf("%s %lf %lf", &name, &salary, &value);
    total=salary+(value*15)/100;
    printf("TOTAL = R$ %0.2f\n", total);
    return 0;
}
