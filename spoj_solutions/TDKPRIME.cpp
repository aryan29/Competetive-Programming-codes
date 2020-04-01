#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
const ll mod = 1000000007;
const ll M = 1000000000000000000ll;
#define pb push_back
////////////////////////////////////////////////////
//Linearized seive
ll arr[90000005];
vector<ll>ans;
void seive(ll n)
{
    ll i,j,c=0;
    vector<ll>v;
    for(i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {

            arr[i]=i;
            v.pb(i);
        }
        for(j=0;j<v.size() && (i*v[j])<=n && v[j]<=arr[i];j++)
        {
            if((i*v[j])<=n)
            arr[i*v[j]]=v[j];
        }
    }
        for(i=2;i<=n;i++)
        {
            if(arr[i]==i)
            {
                ans.pb(i);
            }
        }
}
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif  
    seive(90000000);
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        cout<<ans[x-1]<<"\n";
    }
}