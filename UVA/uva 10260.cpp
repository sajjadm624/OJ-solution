#include<cstdio>
#include<string.h>

using namespace std;

int main()
{
    char str[20];

    int cnt,n,i,j;

    while(scanf("%s", str)==1)
    {
        n = strlen(str);
        cnt=0;
         int temp=0;
    for( i=0 , j=0 ; i<n ; i++)
    {
        if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='H' || str[i]=='W' || str[i]=='Y')

            cnt=0;

        else if(str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V')

             cnt=1;

        else if(str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' || str[i]=='X' || str[i]=='Z')

             cnt=2;

        else if(str[i]=='D' || str[i]=='T')

             cnt=3;

        else if(str[i]=='L')

             cnt=4;

        else if(str[i]=='M' || str[i]=='N')

             cnt=5;

        else if(str[i]=='R')

             cnt=6;

        if(cnt != temp && cnt!=0)
        printf("%d", cnt);

        temp=cnt;
    }
    printf("\n");
  }
  return 0;
}
