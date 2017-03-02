#include<stdio.h>
int main()
{
    int f=0,l=1,n,i=2,c;
    scanf("%d",&n);
    printf("%d %d", f,l);
    while(i<n){
        c=f+l;
        f=l;
        l=c;
        printf(" %d",c);
        i++;
    }
    printf("\n");
    return 0;
}
