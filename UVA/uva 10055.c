#include<stdio.h>
int main()
{
    long long n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF){
         if(n<m)
        printf("%lld\n", m-n);
     else
        printf("%lld\n", n-m);
    }
    return 0;
}
