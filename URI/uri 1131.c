#include<stdio.h>
int main()
{
    int m,n,q=0,i,j,g=0,h=0,l=0;
    for(i=1;i>0;i++){
            scanf("%d %d", &m, &n);
            printf("Novo grenal (1-sim 2-nao)\n");
            if(m>n){
                g=g+1;
            }

            else if (m<n){
                h=h+1;
            }

            else if(m==n){
                 l=l+1;
            }
                q++;

            scanf("%d", &j);

            if(j!=1)
            break;

    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", q,g,h,l);

    if(g>h){
        printf("Inter venceu mais\n");
    }

    else if(g<h){
        printf("Gremio venceu mais\n");
    }

    else if(g==h){
        printf("Nao houve vencedor\n");
    }

    return 0;
}
