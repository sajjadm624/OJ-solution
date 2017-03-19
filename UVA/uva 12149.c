#include<stdio.h>
int main()
{
    long int n,sqs,i;
    while(scanf("%ld", &n)==1 && n>0)
    {
        sqs = 0;
        for(i=1 ; i<=n ; i++)
        {
            sqs = sqs + i*i;
        }
        printf("%ld\n", sqs);
    }
    return 0;
}
