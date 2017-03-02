#include<stdio.h>
int main()
{
    int a,n,i,f=0,j;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &a);
        if(a==2 || a==1 || a==3){
            printf("%d eh primo\n", a);
        }
        else{
            for(j=2;j<=a/2;j++){
                    f=0;
                if(a%j==0){
                    f=1;
                    break;
                }

            }
            if(f==1){
                printf("%d nao eh primo\n", a);
            }
            else if(f==00) {
                printf("%d eh primo\n", a);
            }
        }
    }
    return 0;
}
