#include<stdio.h>
int main()
{
    int n,a,b,s,i,j,h=0,o=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d", &a,&b);
        if(a>b){
                s=0;
        for(j=a-1;j>b;j--){
            if(j%2!=0){
                s=s+j;
            }

        }
        printf("%d\n", s);
    }
    else if (a<b || a==b){
              h=0;
        for(k=b-1;k>a;k--){
                if(k%2!=0){
                h=h+k;
            }

        }
        printf("%d\n", h);
    }
    }
    return 0;

    }

