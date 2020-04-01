#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
const ll mod = 1000000007;
const ll M = 1000000000000000000ll;
#define pb push_back
////////////////////////////////////////////////////
ll n,c=0;
ll d[100005][4];
   ll arr1[100005];
   ll arr2[100005];
ll dp(ll s,ll k)
{
   
    if(d[s][k]!=-1)
        return d[s][k];
    if(s==(n+1))
    {
        d[s][k]=0;
        return d[s][k];
    }
    else
    {
        ll a,b;
    if(s==1)
    {
        a=arr1[s]+abs(arr2[s]-arr2[s-1])+dp(s+1,0)-arr2[s];
        b=arr2[s]+abs(arr1[s]-arr2[s-1])+dp(s+1,1)-arr1[s];
        //cout<<a<<" h "<<b<<" "<<"\n";
        return d[s][k]=max(a,b);     
    }
        else
        {
        if(k==0)
        {
            a=arr1[s]+abs(arr2[s]-arr2[s-1])+dp(s+1,0);
            b=arr2[s]+abs(arr1[s]-arr2[s-1])+dp(s+1,1);
           // cout<<a<<" h "<<b<<" "<<"\n";
            return d[s][k]=max(a,b);
        }
        if(k==1)
        {
            a=arr2[s]+abs(arr1[s]-arr1[s-1])+dp(s+1,1);
            b=arr1[s]+abs(arr2[s]-arr1[s-1])+dp(s+1,0);
            //cout<<a<<" v "<<b<<" "<<"\n";
            return d[s][k]=max(a,b);
        }
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
    ll i,j; 
    cin>>n;
 for(i=1;i<=n;i++)
 {
    for(j=0;j<3;j++)
    {
        //cout<<"hey\n";
        d[i][j]=-1;
    }
 }
    for(ll i=1;i<=n;i++)
    {
        ll x,y;
        cin>>arr1[i]>>arr2[i];
    }
    cout<<dp(1,0);
//    cout<<fixed;
// cout<<setprecision(0);
}