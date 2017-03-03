#include<stdio.h>
int main()
{
    int n[50],i,m,sum,avg,s,h=1;
    while(scanf("%d", &m)==1 && m>0)
    {
        sum=0;
        s=0;
        for(i=0 ; i<m ; i++)
        {
            scanf("%d", &n[i]);
        }
        for(i=0 ; i<m ; i++)
        {
            sum = sum + n[i];
        }

        avg = sum / m;

        for(i=0 ; i<m ; i++)
        {
            if( n[i] > avg )
                s = s + ( n[i]-avg );
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", h, s );
        h++;
    }
    return 0;
}
