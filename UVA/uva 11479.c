#include<stdio.h>
int main()
{
    int t,i,max;
    long long int a,b,c;
    scanf("%d", &t);

    for(i=0; i<t ; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        max = a > b && a > c ? a : b > c ? b : c;
        if((max==a && b+c>max) || (max==b && a+c>max) || (max==c && a+b>max))
        {
            if((a==b && b!=c) || (c==a && a!=b) || (b==c && c!=a))
            printf("Case %d: Isosceles\n", i+1);
            else if(a==b && b==c && c==a)
                printf("Case %d: Equilateral\n", i+1);
            else
                printf("Case %d: Scalene\n", i+1);
        }
        else
            printf("Case %d: Invalid\n", i+1);
    }
    return 0;
}
