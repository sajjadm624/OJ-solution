#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("output.txt", "w", stdout);
    char str[128];
    int n;
    while(scanf("%d", &n)==1)
    {
      if( n==0 )
            break;

       scanf(" %s", str);
        int len = strlen(str);
        int len1 = len/n;
        int m=len1-1;
        for( int j=0 ; j<len ; j=j+len1)
        {
            for( int k=m ; k>=j ; k-- )
            {
                cout<<str[k];
            }
            m = m + len1;
        }
        cout<<endl;
    }
    return 0;
}
