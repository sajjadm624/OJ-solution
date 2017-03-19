#include<stdio.h>
int main()
{
    int i,j,v[10],t,max;
    char a[10][100];

    scanf("%d", &t);
    for(i = 1 ; i <= t ; i++)
    {
        max = 0;

        for(j = 0 ; j < 10 ; j++)
        {
        scanf("%s %d", &a[j], &v[j]);

        if(v[j] >= max)
            max = v[j];
        }

        printf("Case #%d:\n",i);

         for(j = 0 ; j < 10 ; j++){
            if(v[j] == max)
                printf("%s\n", a[j]);
        }
    }
}
