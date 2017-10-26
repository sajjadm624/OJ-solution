#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    double c,f,c1;
    cin>>tc;
    for( int i=1 ; i<=tc ; i++ )
    {
        cin>>c>>f;
        double f1 = 9*c/5+f;
        c1 = f1*5/9;
        printf("Case %d: %0.2lf\n", i, c1);
    }
    return 0;
}
