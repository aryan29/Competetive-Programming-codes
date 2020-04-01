#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
const ll mod = 1000000007;
const ll M = 1000000000000000000ll;
#define pb push_back
inline ll add(ll a, ll b) {return ((a % mod + b % mod) % mod);}
inline ll sub(ll a, ll b) {return ((a % mod - b % mod + mod) % mod);}
inline ll mult(ll a, ll b) {return (((a % mod) * (b % mod)) % mod);}
inline ll power(ll n, ll x) {ll p = 1; while (x != 0) {if (x % 2 == 0) {n = mult(n, n); x = x / 2;} p = mult(p, n); x--;} return p;}
inline ll recurmult(ll a, ll b) {ll r = 0; while (b) {if (b & 1)r = add(r, a); a = mult(2, a); b >>= 1;} return r % mod;}
//Modified Knapsack
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t, c = 0;
    cin >> t;
    while (t--)
    {
        c++;
        ll w1, w2, n, W;
        cin >> w1 >> w2;
        W = w2 - w1;
        cin >> n;
        ll arr[n + 2];
        ll wt[n + 2];
        ll dp[W + 2];
        for (ll i = 0; i <= W+2; i++)
            dp[i]=M;
        dp[0]=0;
        for (ll i = 1; i <= n; i++)
            cin >> arr[i] >> wt[i];
        for(ll i=1;i<=W;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                if(i>=wt[j])
                    dp[i]=min(dp[i-wt[j]]+arr[j],dp[i]);
            }
        }
        if(dp[W]==M)
            cout<<"This is impossible.\n";
        else
        {
            cout<<"The minimum amount of money in the piggy-bank is "<<dp[W]<<".\n";
        }
        // cout<<"Scenario #"<<c<<": "<<dp[n][W]<<"\n";
    }
//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware
//in case of runtime err use
//(ll)(s.length())-1
}