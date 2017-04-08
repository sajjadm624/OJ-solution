#include<stdio.h>
int main()

{
    int a[100],i,t,l,j,k;
    scanf("%d", &t);
    freopen("out.txt","w",stdout);
      for(i=0 ; i<t ; i++)
    {
        int count=0,temp,m;
        scanf("%d", &l);
        for(j=0 ; j<l ; j++)
            scanf("%d", &a[j]);

        for(k=0 ; k<l-1 ; k++)
            {
            for(m=0 ; m<l-k-1 ; m++)
            {
                if( a[m] > a[m+1] )
                {
                    temp=a[m];
                    a[m]=a[m+1];
                    a[m+1]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }
  return 0;
}
