#include<stdio.h>
int main()
{
    int a[1000],n,i,j,t;
    while(scanf("%d", &n)==1)
    {
        for(i=0 ; i<n ; i++)
        {
            scanf("%d", &a[i]);
        }
        t=0;
        for(i=0 ; i<=n-1 ; i++)
        {
            for(j=i+1 ; j<=n-1 ; j++)
            {
                if(a[i]>a[j])
                    t++;
            }
        }
        printf("Minimum exchange operations : %d\n", t);
    }
    return 0;
}
