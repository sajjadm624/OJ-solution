#include<stdio.h>
int main()
{
    int i,a=2002,b;
    for(i=1;i>0;i++){
        scanf("%d",&b);
        if(b==a){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
