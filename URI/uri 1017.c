#include<stdio.h>
int main()
{
    int t,d;
    double e,r;
    scanf("%d%d", &t, &d);
    r = t*d;
    e= r / 12;

    printf("%0.3lf\n", e);
    return 0;
}
