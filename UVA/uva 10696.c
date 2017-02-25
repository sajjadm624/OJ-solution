#include<stdio.h>
int main()
{
    int n,m;

    while(scanf("%d", &n)==1 && n!=0 && n<=1000000)
        {
        m=91;
    if(n<=101)
    printf("f91(%d) = %d\n",n,m);
    else
    printf("f91(%d) = %d\n",n, n-10);
    }

    return 0;
}
