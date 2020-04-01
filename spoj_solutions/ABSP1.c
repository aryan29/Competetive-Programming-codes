#include<stdio.h>
int main()
{
    long long int t,n,sum1=0,sum=0,i,m;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;sum1=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&m);
            sum=sum+(m*(n-i-1));
            sum1=sum1+m*i;
        }
        printf("%lld\n",(sum1-sum));
    }
}
