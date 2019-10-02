// Author: ishaang12
// Time: 2019-09-21 10:53:41

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define DEB(x) cout << '>' << #x << ':' << x << '\n';

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll ans = (n * (n + 1)) / 2;
		ll pow2 = 1;
		while (pow2 <= n)
		{
			ans -= 2 * pow2;
			pow2 *= 2;
		}
		cout << ans << '\n';
	}
	return 0;
}
