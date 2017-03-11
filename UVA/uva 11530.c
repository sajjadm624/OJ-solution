#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,a,b,c,d,total,j,len;
    char n[100];

    scanf("%d", &t);
    getchar();
    for(j=1 ; j<=t ; j++)
    {
        gets(n);

     len=strlen(n);
             a=0;
             b=0;
             c=0;
             d=0;
         total=0;

        for(i=0 ; i<len ; i++)
        {
            if( n[i]=='a' || n[i]=='d' || n[i]=='g' || n[i]== 'j' || n[i]=='m' || n[i]=='p' || n[i]=='t' || n[i]=='w' || n[i]==' ')
            {
                a = a+1;
            }
            else if( n[i]=='b' || n[i]=='e' || n[i]=='h' || n[i]== 'k' || n[i]=='n' || n[i]=='q' || n[i]=='u' || n[i]=='x')
            {
                b = b+2;
            }
            else if( n[i]=='c' || n[i]=='f' || n[i]=='i' || n[i]== 'l' || n[i]=='o' || n[i]=='r' || n[i]=='v' || n[i]=='y')
            {
                c = c+3;
            }
            else if( n[i]=='s' || n[i]=='z')
            {
                d = d+4;
            }
        }

        total = a+b+c+d;

        printf("Case #%d: %d\n", j, total);
    }
    return 0;
}
