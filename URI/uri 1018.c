#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u;
scanf("%d", &n);
printf("%d\n", n);
a=n/100;
b=a*100;
c=n-b;
d=c/50;
e=d*50;
f=c-e;
g=f/20;
h=g*20;
i=f-h;
j=i/10;
k=j*10;
l=i-k;
m=l/5;
n=m*5;
o=l-n;
p=o/2;
q=p*2;
r=o-q;
s=r/1;
t=s*1;
u=r-t;
printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", a, d, g,j, m, p, s);
return 0;
}
