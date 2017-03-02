#include<stdio.h>
int main()
{
    int i,j,n,s;
    scanf("%d", &n);

    for(i=1;i<=n;i++)
        {
            s=1;
         for(j=i;j<i+2;j++){
                s=s*i;
            printf("%d ", s);
        }
         printf("%d\n", s*i);
    }
    return 0;
}
