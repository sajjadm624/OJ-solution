
#include<stdio.h>
int main()
{
int a,e,b,c=0,i,s=0,j;
scanf("%d", &e);
for(j=1;j<=e;j++){
s=0;
c=0;
scanf ("%d%d", &a, &b);
for(i=a;i<=a+(b*2);i++){
    if(i%2!=0){
        s=s+i;
        c=c+1;
    }
    if(c==b){
        break;
    }
}
printf("%d\n", s);
}
return 0;
}
