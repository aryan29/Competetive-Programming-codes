// Author: ishaang12
// Time: 2019-08-30 20:31:56

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define deb(x) cout << '>' << #x << ':' << x << '\n';

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll q;
	cin >> q;
	ll a[1000][1000];
	ll sum[1000];
	for (ll i = 1; i <= 10; ++i)
	{
		for (ll j = 1; j <= 10; ++j)
		{
			a[i][j] = (i * j) % 10;
			sum[i] += (a[i][j]);
		}
	}

	while (q--)
	{
		ll n, m;
		cin >> n >> m;
		ll t = n / m;
		ll ans = (t / 10) * sum[m % 10];
		//deb(ans);
		for (ll i = 1; i <= t % 10; ++i)
		{
			ans += a[m % 10][i];
			//deb(a)
		}
		cout << ans << '\n';
	}
	return 0;
}
