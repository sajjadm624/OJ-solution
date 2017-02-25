#include<stdio.h>
int main()
{
    long long int n;
    int s=0;
    while(scanf("%lld", &n)==1 && n!=0){
            while(n / 10 != 0){
            s=0;
        while(n != 0)
            {
        s = s + n % 10;
        n = n / 10;
        }
        n=s;
    }
    printf("%lld\n", n);
    }
    return 0;
}
