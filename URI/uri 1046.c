#include <stdio.h>
int main()
{
    int a,b,i,s=0;
    scanf("%d%d", &a,&b);


    if(a>b || a==b){
            for(i=a;i<24;i++){
        s=s+1;
    }
    s=s+b;
    }
    else if(b>a){
        for(i=a;i<b;i++){
            s=s+1;
        }
    }
    printf("O JOGO DUROU %d HORA(S)\n", s);
    return 0;
}
