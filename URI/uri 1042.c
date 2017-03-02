#include<stdio.h>
int main()
{
    int a,b,c,temp,i,j;
    scanf("%d %d %d", &a,&b,&c);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    else if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    else if(c>a){
        temp=c;
        c=a;
        a=temp;
    }
    printf("%d\n%d\n%d\n", a,b,c);
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    else if(b<c){
        temp=b;
        b=c;
        c=temp;
    }
    else if(c<a){
        temp=c;
        c=a;
        a=temp;
    }
    printf("%d\n%d\n%d\n", a,b,c);

}
