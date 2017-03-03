#include<stdio.h>
long long rev( long long int a )
{
      long long i=0;
      while(a != 0)
        {
        i = i*10 + a%10;
        a = a/10;
    }
        return i;
}

int main()
{
    long long sum=0,n,m,k;
    int i,t;
    scanf("%d", &t);
    for(i=0 ; i<t ; i++){

        scanf("%lld", &m);
        sum=0;
        n=0;

        while(1)
            {
             k = m;
             n = rev(m);
             if( k==n )
                {
                break;
             }
             else
             {
                m = n + k;
                k = n + k;
                sum++;
             }
        }
        printf("%lld %lld\n", sum, n);
    }

}
