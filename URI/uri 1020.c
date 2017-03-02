#include<stdio.h>
int main()
{    int d;
    scanf("%d", &d);
    int y=d/365;
    int a=d%365;
    int m=a/30;
    int b=a%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y,m,b);

}
