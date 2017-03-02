#include<stdio.h>
int main()
{
    int z,x,y,i,s=0;
    scanf("%d%d", &x,&y);
    z=x-1;

    for(i=z; i>y; i--){
            if(i%2!=0){
                s=s+i;
            }
      }
printf("%d\n", s);
    return 0;

}
