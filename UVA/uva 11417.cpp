#include<iostream>
#include<cstdio>

using namespace std;

int gcd(int a, int b)
{
    int temp;
    while (b != 0){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int n,i,j;
    long g;
    while(scanf ("%d", &n) && n!=0)
    {
        g=0;
        for(i=1 ; i<n ; i++){
            for(j=i+1 ; j<=n ; j++)
            {
                g+=gcd(i,j);
            }
        }
        cout<<g<<endl;
    }
    return 0;
}
