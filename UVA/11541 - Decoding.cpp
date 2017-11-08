#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("out.txt" , "w" , stdout);
    string a,b;
    int n;
    scanf("%d", &n);

    for( int i=1 ; i<=n ; i++)
    {
        cin>>a;
        int len = a.length();
        printf("Case %d: ", i);
        for( int j=0 ; j<len ; )
        {
            char b = a[j];
            j++;
            int num = 0;
            while( isdigit(a[j]) )
            {
                num = num*10 + (a[j]-'0');
                j++;
            }
            for( int k=0 ; k<num ; k++ )
            {
                cout<<b;
            }
        }
        cout<<endl;
    }
    return 0;
}
