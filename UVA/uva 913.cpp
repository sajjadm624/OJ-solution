#include<cstdio>
using namespace std;

int main()
{
    long long a,n;
    while(scanf("%lld", &n)==1)
    {
        a=(((n*(n+2)/2)*3)-6);
        printf("%lld\n", a);
    }
    return 0;
}
