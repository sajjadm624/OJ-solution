#include<stdio.h>
int main()
{

    int x,i,s=0,r=0,j;
    scanf("%d", &x);
    for(i=0;i<x;i++){
            scanf("%d", &j);
        if(j>=10 && j<=20){
            s=s+1;
        }
        else if (j<10 || j>20){
            r=r+1;
        }
    }
    printf("%d in\n%d out\n", s,r);
}
