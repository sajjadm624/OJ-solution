#include<stdio.h>
int main()
{
    int a,b,c,i,j,t,min;
    scanf("%d", &t);
    for(i=0; i<t ; i++){
            min=0;
        scanf("%d %d %d", &a,&b,&c);
        if((a<b && a>c) || (a>b && a<c)){
            min=a;
        }
        else if((b<a && b>c) || (b>a && b<c)){
            min=b;
        }
        else if((c<a && c>b) || (c>a && c<b)){
            min=c;
        }
        printf("Case %d: %d\n",i+1, min);
    }
    return 0;
}
