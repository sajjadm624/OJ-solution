#include<stdio.h>
int main()
{
int n,m,s=0,i,j;
scanf("%d%d", &n,&m);
while(m<0 || m==0){
    scanf("%d", &m);
}
for(i=1,j=n;i<=m;i++,j++){
    s=s+j;
}
printf("%d\n",s);
return 0;
}
