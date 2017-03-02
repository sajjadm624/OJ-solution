#include<stdio.h>
int main()
{
    int i, j, s=0, low, c=0, m, n;
    scanf("%d", &m);
    int a[m+1];

    for(i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    low = a[0], c = 0;

    for(i = 1; i < m; i++){
        if(a[i] < low)
        {
            low = a[i];
            c = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", low,c);

    return 0;
}
