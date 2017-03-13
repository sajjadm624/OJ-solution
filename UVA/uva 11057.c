#include<stdio.h>
int main()
{
    long int a[100000], n,b1,b2,i,j,money,ans,d;

    while(scanf("%ld", &n)==1)
    {
         d=2000000;
        for(i=0 ; i<n ; i++)
        {
            scanf("%ld", &a[i]);
        }

        scanf("%ld", &money);


        for(i=0 ; i<n ; i++)
            {
                for(j=0 ; j<n ; j++)
                {
                    if(a[i] + a[j] == money && i != j)
                    {
                        if( a[i] > a[j] )
                        {
                          if( a[i] - a[j] < d )
                        {
                            b1 = a[j];
                            b2 = a[i];
                            d = a[i] - a[j];
                        }
                      }
                      else
                        {
                        if(a[j] - a[i] < d)
                        {
                            b1 = a[i];
                            b2 = a[j];
                            d = a[j] - a[i];
                        }
                      }
                    }
                }
            }
            printf("Peter should buy books whose prices are %ld and %ld.\n\n", b1,b2);
    }
    return 0;
}
