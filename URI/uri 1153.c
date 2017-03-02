#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d", &n);

    s=n;

    for(i=s-1;i>=1;i--){

        s=s*i;
    }
    printf("%d\n", s);

    return 0;
}
