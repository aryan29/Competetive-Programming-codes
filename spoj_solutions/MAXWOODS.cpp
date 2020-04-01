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
ll dp[205][205];
ll recur(ll i, ll j, ll pt, string s[], ll n, ll m)
{
	ll ans1 = 0, ans2 = 0, ans = 0;
	if(i>=n || j>=m || s[i][j]=='#' || i<0 || j<0)
		return 0;
	if(dp[i][j]!=-1)return dp[i][j];
	if (pt == 0) //Facing Right
	{
		//Either Move Straight in Right
		if (s[i][j] == 'T')
			ans1 = 1 + recur(i, j + 1, 0, s, n, m);
		else
			ans1 = recur(i, j + 1, 0, s, n, m);

		//Or To move down and face left
		if (s[i][j] == 'T')
			ans2 = 1 + recur(i + 1, j, 1, s, n, m);
		else
			ans2 = recur(i + 1, j, 1, s, n, m);
		//cout<<i<<" "<<j<<" "<<ans1<<"\n";
		return dp[i][j]=max(ans1, ans2);
	}
	else if (pt == 1) //Facing Right
	{
		if (s[i][j] == 'T')
			ans1 = 1 + recur(i, j - 1, 1, s, n, m);
		else
			ans1 = recur(i, j - 1, 1, s, n, m);

		//Or To move down and face Right
		if (s[i][j] == 'T')
			ans2 = 1 + recur(i + 1, j, 0, s, n, m);
		else
			ans2 = recur(i + 1, j, 0, s, n, m);
		return dp[i][j]=max(ans1, ans2);
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
	while (t--)
	{
		ll n, m;
		cin >> n >> m;
		string s[n + 1];
		for (ll i = 0; i < n; i++)
			cin >> s[i];
		for(ll i=0;i<=(n+2);i++)
		{
			for(ll j=0;j<=(m+2);j++)
				dp[i][j]=-1;
		}
		cout<<recur(0, 0, 0, s, n, m)<<"\n";
	}
//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware
//in case of runtime err use
//(ll)(s.length())-1
}