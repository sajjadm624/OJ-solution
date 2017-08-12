#include<stdio.h>
int main()
{
      long long int n;
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
            break;

          int s=0;
       while (1)
    {
        while( n!=0 )
        {
             s = s + (n%10);
             n = n/10;
        }
        if( s/10==0 )
            break;
        else
            {
                n = s;
                s = 0;
            }
    }
    printf("%d\n", s);
    }
    return 0;
}
