#include<stdio.h>
int main()
{
    int s=0,h=0,j=0,k=0,i,a,b ;

    for(i=0;i<5;i++){
        scanf("%d",&a);

        if(a%2==0 || a==0){
            s=s+1;
        }
        else if(a%2!=0){
            h=h+1;
        }


        if(a> 0 ){
            j=j+1;
        }
        else if(a < 0){
            k=k+1;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", s,h,j,k);
    return 0;
}
