#include<stdio.h>
int main()
{
    long long int a,b,n,m,s, c;
    /*freopen("out.txt", "w", stdout);*/
    while(scanf("%lld %ld", &a, &b)==2)
    {
        if(a == 0 && b == 0) break;
        s = c = 0;
        while(a||b)
        {
            n = a%10;
            m = b%10;
            c = (n + m + c) / 10;
            s = s + c;
            a = a/10;
            b = b/10;
        }
        if(s == 0)
            printf("No carry operation.\n");
        else if(s == 1)
            printf("1 carry operation.\n");
        else
            printf("%ld carry operations.\n", s);
    }
    return 0;
}
