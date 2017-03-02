#include<stdio.h>
int main()
{
    int n,i,j,k,a[100];
    scanf("%d", &n);
    for(i=0,j=0;i<=999;i++){
            printf("N[%d] = %d\n", i, j);
            j++;
            if(j==n){
                j=0;
            }

    }
    return 0;
}
