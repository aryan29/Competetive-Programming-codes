#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
const ll mod = 1000000007;
const ll M = 1000000000000000000ll;
#define pb push_back
inline ll add(ll a,ll b){return ((a%mod+b%mod)%mod);}
inline ll sub(ll a,ll b){return ((a%mod-b%mod+mod)%mod);}
inline ll mult(ll a,ll b){return (((a%mod)*(b%mod))%mod);}
inline ll power(ll n,ll x){ll p=1;while(x!=0){if(x%2==0){n=mult(n,n);x=x/2;}p=mult(p,n);x--;}return p;}
string s1,s2;
ll fl=0;
ll dp[102][102][52];
ll dynamic(ll a,ll b,ll k)
{
    ll ans=0;
    if(dp[a][b][k]!=-1)
        return dp[a][b][k];
    if(k==0 || a>=s1.length() || b>=s2.length())
    {
        if(k==0)
            fl=1;
        return 0;
    }
    if(s1[a]==s2[b])
        dp[a][b][k]=(ll)max({s1[a]+dynamic(a+1,b+1,k-1),dynamic(a,b+1,k),dynamic(a+1,b,k),dynamic(a+1,b+1,k)});
    else
        dp[a][b][k]=max({dynamic(a+1,b,k),dynamic(a,b+1,k),dynamic(a+1,b+1,k)});
    return dp[a][b][k];

}
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    ll t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>s1>>s2>>k;
        fl=0;
        for(ll i=0;i<=s1.length();i++)
        {
            for(ll j=0;j<=s2.length();j++)
            {
                for(ll z=0;z<=k;z++)
                    dp[i][j][z]=-1;
            }
        }
        ll z=dynamic(0,0,k);
        if(fl==1)
            cout<<z<<"\n";
        else
            cout<<0<<"\n";
    }
//    cout<<fixed;
// cout<<setprecision(0);
}