#include<stdio.h>
int main()
{
    int test,i,a,b,c,max;
    scanf("%d", &test);
    freopen("out.txt","w",stdout);
    for(i=0 ; i<test ; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        max = a > b && a > c ? a : b > c ? b : c;
        if(max ==c && a+b > c)
           printf("OK\n");
        else if(max == b && a+c > b)
            printf("OK\n");
        else if(max == a && b+c > a)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
