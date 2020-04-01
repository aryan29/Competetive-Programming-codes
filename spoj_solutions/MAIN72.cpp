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
		ll n, s = 0;
		cin >> n;
		ll arr[n + 1];
		ll dp[n + 1];
		dp[0] = 0;
		for (ll i = 1; i <= n; i++)
		{
			cin >> arr[i];
			s += arr[i];
		}
		set<ll>ss;
		ss.insert(0);
		ll c=0;
		for (ll i = 1; i <=n; i++)
		{
			vector<ll>v;
			for (auto it : ss)
				{
					ll z=(it+arr[i]);
					v.pb(z);
				}
			for(auto it:v)
				ss.insert(it);
		}
		ll sum=0;
		for(auto it:ss)
		{
			sum+=it;
			//cout<<it<<"\n";
		}
		cout<<sum<<"\n";



	}
//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware
//in case of runtime err use
//(ll)(s.length())-1
}