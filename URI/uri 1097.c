#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    for(j=7;j>=5;j--){

        printf("I=%d J=%d\n", i,j);
    }
    i=i+2;
    for(j=9;j>=7;j--){

        printf("I=%d J=%d\n", i,j);
    }
    i=i+2;
    for(j=11;j>=9;j--){

        printf("I=%d J=%d\n", i,j);
    }
    i=i+2;
    for(j=13;j>=11;j--){

        printf("I=%d J=%d\n", i,j);
    }
    i=i+2;
    for(j=15;j>=13;j--){

        printf("I=%d J=%d\n", i,j);
    }
    return 0;

}

