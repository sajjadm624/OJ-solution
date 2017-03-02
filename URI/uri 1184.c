#include<stdio.h>
int main()
{
    double a[12][12], sum=0.0, avg=0.0;
    int i, j;
    char t;
    scanf("%c", &t);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &a[i][j]);
        }
    }
        for(i=0;i<12;i++){
            for(j=i+1;j<12;j++){
                sum = sum + a[j][i];
            }
        }
        avg=sum/66.0;

        if(t=='S'){
            printf("%0.1lf\n", sum);
        }
        else if(t=='M'){
            printf("%0.1lf\n", avg);
        }
        return 0;
}

