#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d", &a,&b);
    for(i=1;i<=b;i++){
        printf("%d", i);
        if(i%a==0){
            printf("\n");
        }
        else {
            printf(" ");
        }
    }
    return 0;
}
