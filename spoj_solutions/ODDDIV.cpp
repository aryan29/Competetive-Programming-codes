#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
const ll mod = 1000000007;
const ll M = 1000000000000000000ll;
#define pb push_back
////////////////////////////////////////////////////
ll div(ll n)
{
    ll i,c=0,ans=1;
    while(n%2==0)
    {
        n=n/2;
        c++;
    }
    ans=ans*(2*c+1);
    c=0;
    for(i=3;i*i<=n;i++)
    {
        c=0;
        if(n%i==0)
        {
        while(n%i==0)
        {
            c++;
            n=n/i;
        }
        ans=ans*(2*c+1);
        
        }
    }
    if(n>2)
    {
        ans=ans*3;
    }
    //cout<<ans<<"\n";
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif 
    ll i;
    ll ans[100005]; 
    vector<ll>v[100005];
    for(i=1;i<=100000;i++)
    {
        ans[i]=div(i);
        v[ans[i]].pb(i*i);
        //cout<<i<<" "<<ans[i]<<"\n";
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll k,l,r;
        cin>>k>>l>>r;
        ll x,y;
        x=upper_bound(v[k].begin(),v[k].end(),r)-v[k].begin();
        y=upper_bound(v[k].begin(),v[k].end(),l-1)-v[k].begin();
        cout<<(x-y)<<"\n";
    }
    // cout<<v[3][0];
//    cout<<fixed;
// cout<<setprecision(0);
}