#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    string st;
    ll n,i,c=0,ans=0;
    ll coun[2005]={0};
    cin>>st;
    n=st.length();
    for(i=0;i<n;i++)
    {
        if(st[i]=='K')
        {
            c++;
        }
                    coun[i]=c;
    }
    //cout<<coun[n-1]<<"\n";
    for(i=1;i<n;i++)
    {
        if(st[i]=='E')
        {
            //cout<<coun[i-1]<<" "<<(coun[i])<<"\n";
            ans=ans+(coun[i-1]*(coun[n-1]-coun[i]));
            //cout<<ans<<"\n";
        }
    }
    cout<<ans<<"\n";
}
}

