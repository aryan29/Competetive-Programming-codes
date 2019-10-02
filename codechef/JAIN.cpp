#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    while (t--)
    {
        long long int i,t,n,cc=0,j;
       scanf("%lld",&n);
        long long int count[100010] = {0};
        long long int ne[100005]={0};
        string a;
        for(i=0;i<n;i++)
        {

            cin>>a;
            int c1 = 0;
            int c2 = 0;
            int c3 = 0;
            int c4 = 0;
            int c5 = 0;
            if(a.find('a')!=string::npos)
                count[i]+=1;
            if(a.find('e')!=string::npos)
                count[i]+=2;
            if(a.find('i')!=string::npos)
                count[i]+=4;
            if(a.find('o')!=string::npos)
                count[i]+=8;
            if(a.find('u')!=string::npos)
                count[i]+=16;
        }
long long int sum=0;
for(i=0;i<=32;i++)
{
 for(j=0;j<n;j++)
 {
  if(count[j]==i)
        ne[i]++;
 }
}
for(i=1;i<=30;i++)
    {
        for(j=i+1;j<=31;j++)
        {
            if((i|j)==31)
                {
                sum=sum+(ne[i]*ne[j]);
                }
        }
    }
    sum=sum+(ne[31]*(ne[31]-1))/2;
    printf("%lld\n",sum);
        }

}


