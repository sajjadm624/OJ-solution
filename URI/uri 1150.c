
#include<stdio.h>
int main()
{
    int x,z,s=0,i,j;
    scanf("%d", &x);
    scanf("%d", &z);
    while(z==x || z<x){
        scanf("%d", &z);
    }
    for(i=1,j=x;i<z;i++,j++){
        s=s+j;
        if(s==z || s>z){
            break;
        }
    }
    printf("%d\n", i);
    return 0;
}
