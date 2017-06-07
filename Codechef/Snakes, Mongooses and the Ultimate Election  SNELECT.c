#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,tc,j,M,S;
    char a[100];
    scanf("%d", &tc);
    for(i=0 ; i<tc ; i++)
    {
        scanf("%s", a);
        n=strlen(a);
        M=0;
        S=0;
        for(j=0 ; j<n ; j++)
        {
            if(a[j]=='m')
                M++;
            else
                S++;
        }
         int nm=0;
        for(j=0 ; j<n ; j++)
        {
            if((a[j]=='m' && a[j+1]=='s')||(a[j]=='s' && a[j+1]=='m'))
            {
                     nm++;
                     j++;
            }

        }
              S=S-nm;
        if(S>M)
            printf("snakes\n");
        if(S<M)
            printf("mongooses\n");
        if(S==M)
            printf("tie\n");
    }
    return 0;
}
