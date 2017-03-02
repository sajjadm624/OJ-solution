
#include<stdio.h>
int main()
{
    double s=0,i,j;
    for(i=1,j=1;i<=100;i++){
        s=s+j/i;
    }
    printf("%0.2lf\n",s);
    return 0;
}
}
