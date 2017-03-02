#include<stdio.h>
int main()
{
    int number,hours;
    double wage;
    scanf("%d%d", &number, &hours);
    scanf("%lf", &wage);

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %0.2lf\n", wage * hours);
    return 0;
}
