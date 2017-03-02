#include<stdio.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf%lf%lf%lf", &a,&b,&c,&d);
    double m=((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
    if(m>=7.0){
            printf("Media: %0.1lf\n", m);
        printf("Aluno aprovado.\n");
    }
    else if(m<5.0){
        printf("Media: %0.1lf\n", m);
        printf("Aluno reprovado.\n");
    }
    else if(m<=6.9)
    {

        scanf("%lf", &e);
        printf("Media: %0.1lf\n", m);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %0.1lf\n", e);
        double s=(e+m)/2;
        if(s>5.0){
            printf("Aluno aprovado.\n");
        }
        else if (s<4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1lf\n", s);
    }
    return 0;
}
