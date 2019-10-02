// Author: ishaang12
// Time: 2019-09-21 12:35:02

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define DEB(x) cout << '>' << #x << ':' << x << '\n';

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin >> n;
	vector<pair<ll, ll>> a;
	for (ll i = 0; i < n; ++i)
	{
		ll temp;
		cin >> temp;
		a.push_back(make_pair(temp, i));
	}
	sort(a.begin(), a.end(), greater<>());
	ll ans = 0;
	ll k = 0;
	for (ll i = 0; i < n; ++i)
	{
		ans += (a[i].first * k) + 1;
		k++;
	}
	cout << ans << '\n';
	for (ll i = 0; i < n; ++i)
	{
		cout << a[i].second + 1 << " ";
	}

	return 0;
}
