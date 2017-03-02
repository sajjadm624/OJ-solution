#include <stdio.h>
int main()
{
    int a,i,c,d;
    double e;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        scanf("%d%d", &c, &d);
        if(d==0)
            printf("divisao impossivel\n");
        else
        {
            e= c/(d*1.0);
            printf("%.1lf\n", e);
        }
    }
    return 0;
}
