#include<stdio.h>
int main()
{
    int n,t,i;
    while(scanf("%d", &t)==1 && t>=1 && t<=100)
    {
        for(i=0 ; i<t ; i++)
        {
            scanf("%d", &n);
            n = ((((((n*567)/9)+7492)*235)/47)-498);
            n=n/10;
            n=n%10;
            if(n<0)
            n = (-1)*n;
            printf("%d\n", n);
        }
        return 0;
    }
}
