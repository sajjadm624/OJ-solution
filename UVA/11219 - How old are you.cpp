#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc, d, d1, m, m1, y1, y;
    char c;
    cin>>tc;
    for( int i=1 ; i<=tc ; i++ )
    {
        cin>>d>>c>>m>>c>>y;
        cin>>d1>>c>>m1>>c>>y1;

        int ans = y-y1;

        if(m1 > m || (m1 == m && d1 > d))
            ans--;

        if(ans < 0)
            cout<<"Case #"<<i<<": Invalid birth date\n";
        else if(ans > 130)
            cout<<"Case #"<<i<<": Check birth date\n";
        else
            cout<<"Case #"<<i<<": "<<ans<<endl;
    }
    return 0;
}
