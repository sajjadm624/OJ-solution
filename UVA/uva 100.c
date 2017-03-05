#include<stdio.h>
int main()
{
    int n,s,i,m,a,temp,j;
    while(scanf("%d %d", &n, &m)==2)
    {
        printf("%d %d", n,m);
        if(n>m)
        {
            temp = m;
            m=n;
            n=temp;
        }
        a=0;
        for(i=n ; i<=m ; i++)
        {
            s=1;
            j=i;
        while(j>1)
      {
            if(j%2==1)
                j = (3*j) + 1;
            else
                j = j/2;
            s++;
      }
      if( s>=a )
        a=s;
      }
       printf(" %d\n", a);
    }
    return 0;
}
