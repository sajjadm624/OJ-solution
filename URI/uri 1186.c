#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0;j<(n*2)-1;j++){
                if(j%2==0)
            printf("1", n);
                else
                    printf(" ");

        }
        printf("\n");
    }
}
