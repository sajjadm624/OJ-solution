#include<stdio.h>
int main()
{

    int i,j,t,temp,n,m,sum;
    scanf("%d", &t);
    for(i=1 ; i<=t ; i++){
        scanf("%d\n%d", &n,&m);
        sum=0;
        if(n>m){
            temp=n;
            n=m;
            m=temp;
        }
        for(j=n ; j<=m ; j++){
            if(j%2!=0){
                sum = sum + j;
            }
        }
         printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
