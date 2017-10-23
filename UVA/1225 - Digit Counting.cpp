#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc, n;
    cin>>tc;
    for( int i=0 ; i<tc ; i++ )
    {
        int ar[10] = {0};
        cin>>n;
        for( int j=1 ; j<=n ; j++ )
        {
            int k=j;

             while( k!=0 )
            {

                ar[k%10]++;
                k = k/10;
            }
        }
        for( int j=0; j<10; j++ )
        {
            cout<<ar[j];
            if( j<9 )
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
