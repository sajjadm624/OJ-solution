#include<stdio.h>
int main()
{
    int i,t,j;
    long long n, sum, k, l;
    scanf("%d", &t);
    for(i=0 ; i<t ; i++){
             scanf("%lld", &n);
             sum=0;
             k=n;
        for(j=1 ; j>0 ; j++){
            l=0;
            while(n != 0){
                l = l*10 + n%10;
                n = n/10;
            }
            if(l == k){
                break;
            }
            else{
                n = l + k;
                k = l + k;
                sum++;
            }
        }
        printf("%lld %lld\n", sum, l);
    }
return 0;
}
