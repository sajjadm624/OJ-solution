#include<stdio.h>
int main()
{
    int a[10],k,i,s;
    scanf("%d", &k);
    for(i=0;i<10;i++){
        a[i]=k;

        printf("N[%d] = %d\n", i,a[i]);
        k=k*2;
    }
    return 0;
}
