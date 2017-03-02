#include<stdio.h>
int main()
{
    int n,i,j,m,s;
    scanf("%d", &n);
    for(i=0;i<n;i++){
            s=0;
        scanf("%d", &m);
        for(j=1;j<m;j++){
            if(m % j==0){
                s=s+j;
            }
        }
        if(s==m){
            printf("%d eh perfeito\n",m);
        }
        else
            printf("%d nao eh perfeito\n", m);
    }
    return 0;
}
