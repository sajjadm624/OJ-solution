#include<stdio.h>
int main()
{
    int n,k,p,t,i,j;
     while(scanf("%d", &t)==1 && t<=1000)
    {
        for(i=1 ; i<=t ; i++){
        scanf("%d %d %d", &n, &k, &p);
        for(j=1 ; j<=p ; j++)
        {
            if(k == n)
               k=0;

            k++;
        }
        printf("Case %d: %d\n",i,k);
    }
 }

    return 0;
}
