#include<stdio.h>
int main()
{
    long int n,m;
    while(scanf("%ld %ld", &n, &m)==2)
    {
        printf("%ld\n", m*n-1);
    }
}
