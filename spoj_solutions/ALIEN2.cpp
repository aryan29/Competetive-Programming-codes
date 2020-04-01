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
	ll n, k;
	cin >> n >> k;
	ll a[n+1],b[n+1];
	for (ll i = 1; i <= n; i++)
		cin >> a[i];
	for (ll i = 1; i <= n; i++)
		cin >> b[i];
	ll dp1[n+1];
	ll dp2[n+1];
	dp1[0]=0;
	dp2[0]=0;
	ll ans=-1,pt=-1;
	for(ll i=1;i<=n;i++)
	{
		dp1[i]=min(dp1[i-1]+a[i],dp2[i-1]+a[i]+b[i]);
		dp2[i]=min(dp2[i-1]+b[i],dp1[i-1]+a[i]+b[i]);
		if(min(dp1[i],dp2[i])>k)
		{
			ans=min(dp1[i-1],dp2[i-1]);
			pt=i-1;
			break;
		}
		// cout<<dp1[i]<<" "<<dp2[i]<<"\n";
	}
	if(ans==-1)
		cout<<n<<" "<<min(dp1[n],dp2[n]);
	else
	cout<<pt<<" "<<ans<<"\n";
	
//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware
//in case of runtime err use
//(ll)(s.length())-1
}