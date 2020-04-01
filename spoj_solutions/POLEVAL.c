#include<stdio.h>
int main()
{
    long long int t,i,k,sum=0,x,n,j,y=1;
    long long int a[10000];
    while(1)
    {
        scanf("%lld",&n);
        if(n==-1)
            break;
        for(i=0;i<=n;i++)
            scanf("%lld",&a[i]);
            scanf("%lld",&k);
            printf("Case %lld:\n",y++);
        for(i=0;i<k;i++)
        {
            sum=0;
            scanf("%lld",&x);
            for(j=0;j<n;j++)
            {
                sum=(sum+a[j])*x;
            }
            sum=sum+a[n];
            printf("%lld\n",sum);
        }
    }
}
