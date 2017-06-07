#include<stdio.h>
int main()
{
    int tc, i,j,b,r,m,e;
    char a[10];
    scanf("%d", &tc);
    for(i=0; i<tc ; i++){
            for(j=0 ; j<4 ; j++){
             scanf("%s", &a);
             if(a[0]=='B')
                scanf("%d", &b);
             else if(a[0]=='R')
                scanf("%d", &r);
             else if(a[0]=='M')
                scanf("%d", &m);
             else if(a[0]=='E')
                scanf("%d", &e);
            }

            if(b>e && r<m)
                printf("Barcelona\n");
            else
                printf("RealMadrid\n");
    }
return 0;
}
