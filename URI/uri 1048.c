#include<stdio.h>
int main()
{
    double n,m,o,p;
    char ch='%';
    scanf("%lf", &n);
    if (n>=0 && n<=400.00){
            p=15;
        m=n*(p/100);
        o=m+n;
    printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %0.0lf %c\n", o,m,p,ch);

    }
    else if(n>=400.01  && n<=800){
        p=12;
        m=n*(p/100);
        o=m+n;
    printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %0.0lf %c\n", o,m,p,ch);
    }

    else if(n>=800.01  && n<=1200.00){
        p=10;
        m=n*(p/100);
        o=m+n;
    printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %0.0lf %c\n", o,m,p,ch);
    }
    else if(n>=1200.01 && n<=2000.00){
        p=7;
        m=n*(p/100);
        o=m+n;
    printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %0.0lf %c\n", o,m,p,ch);
    }
    else if(n>=2000.00){
        p=4;
        m=n*(p/100);
        o=m+n;
    printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %0.0lf %c\n", o,m,p,ch);
    }

return 0;
}
