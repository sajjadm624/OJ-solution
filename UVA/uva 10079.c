#include<stdio.h>
int main()
{
    long int n,o;
    int i;

    while(scanf("%d",&n)==1 && n>=0 && n<=210000000){
                     o=1;
            for(i=1; i<=n ;i++){
                o=o+i;
            }
            printf("%ld\n", o);
        }
        return 0;
}
