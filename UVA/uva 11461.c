#include<stdio.h>
#include<math.h>
int main()
{
    int a,m,n,i,o,b,s;
    while(scanf("%d %d", &n,&m)==2 && n>0 && m>0)
        {
                s=0;
            for(i=n ; i<=m ;i++)
        {
                b = sqrt(i);
              if(b*b == i){
                s++;
            }
        }
         printf("%d\n", s);
    }
    return 0;
}
