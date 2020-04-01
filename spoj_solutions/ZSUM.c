#include<stdio.h>
#include<math.h>
int power(long long int x,long long int n)
{
    long long int result=1,M=10000007;
    while(n>0)
    {
        if(n%2==1)
            result=((result%M)*(x%M))%M;
        x=((x%M)*(x%M))%M;
        n=n/2;
    }
    return result;
}
int main()
{
    long long int n,k,m=10000007,i,sum=0,ans=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
    while(1)
    {
    scanf("%lld %lld",&n,&k);
    if(n==0 && k==0)
        break;
ans=2*power((n-1),k)+power(n,k)+power(n,n)+2*power((n-1),(n-1));
    ans=ans%m;
    printf("%lld\n",ans);
    }


}
