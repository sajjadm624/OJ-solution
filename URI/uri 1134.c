#include<stdio.h>
int main()
{
    int x,i,a=0,d=0,g=0;
    for(i=1;i>0;i++){

        scanf("%d",&x);
        if(x==4){
            break;
        }
        else if(x==1){
            a=a+1;
        }
        else if(x==2){
            g=g+1;
        }
        else if(x==3){
            d=d+1;
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", a,g,d);
    return 0;
}
