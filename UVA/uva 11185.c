#include<stdio.h>
int main()
{
    int i,j[100],k,l;
    int n;
   while(scanf("%d", &n) == 1 && n >= 0)
    {
            if(n==0){
                printf("0\n");
                continue;
            }
            l=0;

            while(n!=0)
                {
                j[l++] = n%3;
                n = n/3;
            }
            for(k=l-1 ; k>=0 ; k--){
                printf("%d", j[k]);
            }
            printf("\n");

    }
    return 0;
}
