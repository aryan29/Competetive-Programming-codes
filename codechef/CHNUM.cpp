#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n,c1,c2,c3,x,y;
    long long  int a[100005];
    scanf("%lld",&t);
    while(t--)
    {
        c1=0;c2=0;c3=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            {scanf("%lld",&a[i]);
            if(a[i]>0)
                c1++;
            else if(a[i]==0)
                c3++;
            else
                c2++;
               }
               x=max(c1,c2)+c3;
               y=min(c1,c2);
               if(y==0)
                y=x;

            printf("%lld %lld\n",x,y);
    }
}

