#include<stdio.h>

long long summing( long long n );

int main()
{
    long long p , res;
    int i , tc;
    scanf( "%d", &tc );
    for( i=1 ; i<=tc ; i++ )
    {
        scanf( "%lld", &p );
        res = summing( p );

    while( res>=10 )
    {
        res = summing(res);
    }

    if( res==1 )
        printf("Case #%d: %lld is a Happy number.\n", i , p);
    else
        printf("Case #%d: %lld is an Unhappy number.\n", i , p);

    }
    return 0;
}

long long summing( long long n )
{
    long long result=0 , m;

    while ( n!=0 )
    {
        m = n%10;
        result = result + m * m;
        n = n / 10;
    }
    return result;
}
