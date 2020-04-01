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
ll recur(ll pt, ll arr[], ll dp[],ll n)
{
	ll ans;
	if (dp[pt] != -1)return dp[pt];
	if (pt == n || pt==n+1)return dp[pt]=0;
	ans = max(arr[pt] + recur(pt + 2, arr, dp, n), recur(pt + 1, arr, dp, n));
	return dp[pt] = ans;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t,c=1;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll arr[n + 1];
		ll dp[n + 3];
		for (ll i = 0; i <= n+2; i++)
			dp[i] = -1;
		for (ll i = 0; i < n; i++)
			cin >> arr[i];
		cout<<"Case "<<c<<": "<<recur(0, arr, dp, n)<<"\n";
		c++;
	}
//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware
//in case of runtime err use
//(ll)(s.length())-1
}