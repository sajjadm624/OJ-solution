#include<stdio.h>
int main()
{
    long long int a[61],m,j,i,n,b,f=0,s=1;

        a[0]=0, a[1]=1;

        for(i=2;i<61;i++){
        a[i]=f+s;
        f=s;
        s=a[i];
    }

    scanf("%lld",&m);
    for(j=0;j<m;j++){
    scanf("%lld",&n);
    printf("Fib(%lld) = %lld\n",n,a[n]);
        }
         return 0;
}
