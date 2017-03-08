#include<stdio.h>
#include<string.h>

int main()
{
    int mod4,mod15,mod55,mod400, mod100,i,leap,len,flag,count=0;
    char n[1000];



    while(scanf("%s", &n)==1)
    {
        if(count>0)
            printf("\n");
        count++;

        leap=flag=mod4=mod15=mod55=mod100=mod400=0;
        len=strlen(n);

        for(i=0 ; i<len ; i++)
        {
            mod4=(mod4*10 + n[i]-'0')%4;
            mod15=(mod15*10 + n[i]-'0')%15;
            mod55=(mod55*10 + n[i]-'0')%55;
            mod100=(mod100*10 + n[i]-'0')%100;
            mod400=(mod400*10 + n[i]-'0')%400;
        }
        if((mod4==0 && mod100!=0) || mod400==0)
        {
            printf("This is leap year.\n");
            leap=1;
            flag=1;
        }
        if(mod15==0)
        {
            printf("This is huluculu festival year.\n");
            flag=1;
        }
        if(leap==1 && mod55==0)
        {
            printf("This is bulukulu festival year.\n");
        }

        if(flag==0)
        {
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
