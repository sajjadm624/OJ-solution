#include<stdio.h>
int main()
{
    int s,h,m;
    scanf("%d", &s);

    m=s/60;
    int j=m*60;
    int k=s-j;

    h=m/60;
    int i=h*60;
    int n=m-i;

    printf("%d:%d:%d\n", h,n,k);

}
