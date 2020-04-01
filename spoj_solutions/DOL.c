#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,i,j,k,rem,num;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        if(n%2==0 && n%4!=0)
        printf("Case %lld: %lld\n",i,(n/2));
        else if(n%2==1)
        {
                    printf("Case %lld: %lld\n",i,n);
        }
        else if(n%4==0)
        {
            num=n;
         while(num!=0)
         {
             rem=num/2;
             if(rem%2==1)
                {printf("Case %lld: %lld\n",i,rem);
                break;}
             num=num/2;
         }
        }


    }
}
