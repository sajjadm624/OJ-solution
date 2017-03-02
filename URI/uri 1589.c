#include<stdio.h>
int main()
{
    int i,r1,r2,n,t;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %d", &r1,&r2);
        t=r1+r2;
        printf("%d\n", t);
    }
    return 0;
}
