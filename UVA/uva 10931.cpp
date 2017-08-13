#include<cstdio>

using namespace std;

int main()
{
    int a,i,j,cnt,str[100];
    while(scanf("%d", &a)==1)
    {
        cnt =0;
        i=0;

        if(a==0)
            break;

        while( a!=0 )
        {
            str[i] = a%2;
            if(str[i]==1)
                cnt++;

            a = a/2;
            i++;
        }
         printf("The parity of ");
        for(j = i - 1; j>=0; j--){
            printf("%d", str[j]);
        }
        printf(" is %d (mod 2).\n", cnt);

    }
    return 0;
}
