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
inline ll recurmult(ll a,ll b){ll r = 0;while (b){if (b & 1)r = add(r, a);a = mult(2,a);b >>= 1;}return r%mod;}
//Modified Knapsack
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif  
    ll t,c=0;
    cin>>t;
    while(t--)
    {
        c++;
        ll n,W;
        cin>>n>>W;
        ll arr[n+2];
        ll dp[n+2][W+2];
        for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=W;j++)
                dp[i][j]=0;
        }
        for(ll i=1;i<=n;i++)
            cin>>arr[i];
        for(ll i=1;i<=n;i++)
        {
            for(ll j=0;j<=W;j++)
            {
                if(i==1 && j>=arr[i])
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-arr[i]]+arr[i]);
                if(j>=arr[i] && i>=2)
                    dp[i][j]=max(dp[i-1][j],dp[i-2][j-arr[i]]+arr[i]);
                else
                    dp[i][j]=max(dp[i][j],dp[i-1][j]);
            }
        }
        cout<<"Scenario #"<<c<<": "<<dp[n][W]<<"\n";
    }
//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware 
//in case of runtime err use
//(ll)(s.length())-1
}