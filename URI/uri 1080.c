#include<stdio.h>
int main()
{
    int n[100],i,s=0,big=0,c=0;
    for(i=0;i<100;i++){
        scanf("%d", &n[i]);
        s=s+1;
        if(n[i]>big){
            big=n[i];
            c=s;
        }

    }
    printf("%d\n%d\n", big,c);
    return 0;

}
