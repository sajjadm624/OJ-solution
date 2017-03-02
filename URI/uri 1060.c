#include<stdio.h>
int main()
{
    int s=0,i;
    double a;

    for(i=0;i<6;i++){
        scanf("%lf",&a);
        if(a>0){
            s=s+1;
        }
    }
    printf("%d valores positivos\n", s);
    return 0;
}
