#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>a;
    map<string,int>b;
    string s1,s2,s3,ans;
    int t,x,y,i,ma,pos;
    scanf("%d",&t);
    while(t--)
    {
        ma=0;
        for(i=0;i<12;i++)
        {
         cin>>s1>>x>>s3>>y>>s2;
         //cout<<s1<<endl<<x<<endl<<s2<<endl<<y<<endl;
         if(x>y)
            {a[s1]+=3;


            }
         else if(x<y)
            a[s2]+=3;
        else
        {
            a[s1]++;
            a[s2]++;
        }
        b[s1]+=x-y;
        b[s2]+=y-x;
        }
        for(auto const& i:a)
        {
            if(i.second>ma)
            {
                ma=i.second;
                ans=i.first;
            }
            else if(ma==i.second)
            {
              if(b[i.first]>b[ans])
              {
                  ma=i.second;
                  ans=i.first;
              }
            }
        }
        cout<<ans;
        a[ans]=0;
        b[ans]=0;
        ma=0;
        for(auto const& i:a)
        {
            if(i.second>ma)
            {
                ma=i.second;
                ans=i.first;
            }
            else if(ma==i.second)
            {
              if(b[i.first]>b[ans])
              {
                  ma=i.second;
                  ans=i.first;
              }
            }
        }
        printf(" ");
        cout<<ans<<endl;
        a.clear();
        b.clear();

    }
}

