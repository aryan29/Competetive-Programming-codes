// Author: ishaang12
// Time: 2019-07-17 11:54:35

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll q;
	cin >> q;
	while (q--)
	{
		ll n, m;
		cin >> n >> m;
		char a[n][m] = {0};
		ll crow[n] = {0};
		ll ccol[m] = {0};
		for (ll i = 0; i < n; ++i)
		{
			for (ll j = 0; j < m; ++j)
			{
				cin >> a[i][j];
			}
		}
		for (ll i = 0; i < n; ++i)
		{
			for (ll j = 0; j < m; ++j)
			{
				crow[i] += (a[i][j] == '.');
				ccol[j] += (a[i][j] == '.');
			}
		}
		ll ans = n + m;
		for (ll i = 0; i < n; ++i)
		{
			for (ll j = 0; j < m; ++j)
			{
				ans = min(ans, crow[i] + ccol[j] - (a[i][j] == '.'));
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
