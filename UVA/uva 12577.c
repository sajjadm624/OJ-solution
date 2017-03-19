#include<stdio.h>
#include<string.h>
int main()
{
    int i=1;
    char a[50];
    while(gets(a))
    {
        if(a[0] == '*')
            break;
        if(strlen(a) == 4)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(strlen(a) == 5)
            printf("Case %d: Hajj-e-Asghar\n",i);
            i++;
    }
    return 0;
}
