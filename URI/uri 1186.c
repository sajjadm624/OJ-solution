#include<stdio.h>
int main()
{

    double m[12][12], avg=0, sum=0;
    int i, j, p=11;
    char O;

    scanf("%c", &O);

    for(i=0 ; i<12 ; i++)
    {
        for(j=0 ; j<12 ; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }

    for(i=1 ; i<=11 ; i++)
    {
        for(j=11; j>=p ; j--)
        {
            sum=sum + m[i][j];
        }
        p--;
    }

    if(O == 'S')
        printf("%0.1lf\n", sum);

    else if (O == 'M')
    {
        avg = sum / 66.0;
        printf("%0.1lf\n", avg);
    }

    return 0;
}
