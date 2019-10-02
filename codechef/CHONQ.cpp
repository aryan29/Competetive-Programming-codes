#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,k,i,sum=0,pos,c,j,y=0;
    long long int a[100002],ne[100002];
    scanf("%lld",&t);
    while(t--)
    {   sum=0;c=0;y=0;
        scanf("%lld %lld",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }

        for(i=1;i<=n;i++)
        {
            sum=0;
        for(j=i;j<=(n);j++)
        {
          sum=sum+(a[j-1]/(j-i+1) );
        }
        ne[c++]=sum;
        if(k>=ne[c-1])
        {
            printf("%lld\n",(c));
            y=1;
            break;
        }
        }
      if(y==0)

        printf("%lld\n",(n+1));
    }
}

