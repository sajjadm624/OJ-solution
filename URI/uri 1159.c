
#include<stdio.h>
int main()
{
    int n,i,s,c;

    for(i=1;i>0;i++){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        else{
                 s=0;
            for(i=n;i<n+(2*5);i++){
                if(i%2==0){
                    s=s+i;
                }
            }
            printf("%d\n", s);
        }
    }
    return 0;
}
