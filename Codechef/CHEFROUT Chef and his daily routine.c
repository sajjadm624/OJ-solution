#include<stdio.h>
int main()
{
    int tc,i,count,j,n;
    char a[100000];
    scanf("%d", &tc);
    for(i=0 ; i<tc ; i++)
    {
        scanf("%s", a);
        n=strlen(a);
        count=0;
        for(j=0 ; j<n-1 ;j++)
        {
               if(a[j+1] < a[j])
                count++;
        }
        if(count==0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
