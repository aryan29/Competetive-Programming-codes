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
ll dp[55][1005];
ll recur(ll n, ll W, ll a[], ll b[], ll pt, ll ww)
{
	ll ans = 0, x = 0, y = 0;
	if (ww > W)
		return -1 * M;
	if (dp[pt][ww] != -1)return dp[pt][ww];
	if (ww == W || pt >= n)
		return dp[pt][ww] = 0;
	x = b[pt] + recur(n, W, a, b, pt + 1, ww + a[pt]);
	y = recur(n, W, a, b, pt + 1, ww);
	ans = max(x, y);
	return dp[pt][ww] = ans;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		for (ll i = 0; i <= k + 2; i++)
		{
			for (ll j = 0; j <= n + 2; j++)
				dp[i][j] = -1;
		}
		ll a[k + 1];
		ll b[k + 1];
		for (ll i = 0; i < k; i++)
			cin >> a[i] >> b[i];
		cout << "Hey stupid robber, you can get "<<recur(k, n, a, b, 0, 0)<<".\n";
	}
//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware
//in case of runtime err use
//(ll)(s.length())-1
}