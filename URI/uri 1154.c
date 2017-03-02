#include<stdio.h>
int main()
{
    int n,i;
    float avg,sum=0,c=0;
    for(i=1;i>0;i++){
        scanf("%d", &n);
        if(n>0){
            sum=sum+n;
            c=c+1;
        }
        else if(n<0){
            break;
        }
    }
    avg=sum/c;
    printf("%0.2lf\n",avg);
    return 0;
}
