#include<stdio.h>
int main()
{
    int s=0,i,a;

    for(i=0;i<5;i++){
        scanf("%d",&a);
        if(a%2==0){
            s=s+1;
        }
    }
    printf("%d valores pares\n", s);
    return 0;
}
