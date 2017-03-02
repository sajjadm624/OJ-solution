#include<stdio.h>
int main()
{
    int i,a[20],j;
    for(i=0 ; i<20 ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0,i=19 ; j<20,i>=0 ; j++,i--)
    {

        printf("N[%d] = %d\n",j,a[i]);

    }
    return 0;
}
