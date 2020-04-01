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
ll prime[300005];
ll sm[300005];
void isPrime()
{
	prime[1]=1;
	for (ll i = 2; i * i <= 250000; i++)
	{
		if (prime[i] == 0)
		{
			for (ll j = i * i; j <= 250000; j += i)
				prime[j] = 1;
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
	ll t;
	cin >> t;
	isPrime();
	for(ll i=1;i<250000;i++)
		sm[i]+=(sm[i-1]+!prime[i]);
	while (t--)
	{
		ll n, zz = 0;
		cin >> n;
		ll ans[n + 2] = {1, 1, 1, 1};
		for (ll i = 4; i <= n; i++)
			ans[i] = ans[i - 1] + ans[i - 4];
		cout << sm[ans[n]] << "\n";


	}
}