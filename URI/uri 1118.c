#include<stdio.h>
int main()
{
    double a,b,c,d=1,e=1,f=1,g,h,i,m=0,n=0,o=0;
    for(i=1 ; i>0 ; i++)
        {
           d=1;
        while(d==1){
            scanf("%lf", &a);
            if(a<0 || a>10){
                printf("nota invalida\n");
                continue;
            }
            d=d+2;
        }
               e=1;
        while(e==1){

            scanf("%lf", &b);
            if(b<0 || b>10)  {
                printf("nota invalida\n");
                continue;
        }
        e=e+2;
    }
    c = (a+b) / 2;
    printf("media = %0.2lf\n", c);
    printf("novo calculo (1-sim 2-nao)\n");

                 f=1;
    while(f==1){

        scanf("%lf", &g);
        if(g<1 || g>2){
        printf("novo calculo (1-sim 2-nao)\n");
        continue;
        }
        f=f+2;
    }

    if(g==2){
        break;
    }
}
return 0;
}

