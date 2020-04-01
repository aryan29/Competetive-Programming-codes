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

int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n>548 || k>6*n || k>3300)
        {
            cout<<0<<"\n";
            continue;
        }
        long double dp[n+3][k+3];
        for(ll i=0;i<=n+1;i++)
        {
            for(ll j=0;j<=k+1;j++)
                dp[i][j]=0;
        }
        dp[0][0]=1;
        for(ll i=1;i<=n;i++) //moves
        {
            ll j;
            for(j=1;j<=k;j++) //sum
            {
                for(ll k=1;k<=6;k++)
                {
                    if((j-k)>=0)
                    dp[i][j]+=dp[i-1][j-k];
                }
                dp[i][j]/=6.0;
            }
            // dp[i][j]/=6.0;
        }
    cout<<(ll)floor(100.0*dp[n][k])<<"\n";
    }
//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware 
//in case of runtime err use
//(ll)(s.length())-1
}