#include<stdio.h>
int main()
{
    int M,N,i,sum=0,temp;
    while(scanf("%d %d",&M,&N)!=EOF)
    {
        sum=0;
        if(M<1 || N<1)
        {
            break;
        }
        if(M>N)
        {
            temp=N;
            N=M;
            M=temp;
        }
        for(i=M;i<=N;i++)
        {
            sum=sum+i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
