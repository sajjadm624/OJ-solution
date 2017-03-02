#include<stdio.h>
int main()
{
    double s=0.0, m, o, a[12][12];
    int n,x,y;
    char t[2];

    scanf("%d", &n);
    scanf("%s", &t);
    for(x=0;x<12;x++){
        for(y=0;y<12;y++){
            scanf("%lf", &a[x][y]);
            if(y==n){
                s+=a[x][y];
            }
        }
    }
    if(t[0]=='S'){
        o=s;
        printf("%0.1lf\n", o);
    }
    else if(t[0]=='M'){
        m=s/12.00;
        printf("%0.1lf\n", m);
    }
return 0;
}
