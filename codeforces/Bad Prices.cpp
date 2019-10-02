// Author: ishaang12
// Time: 2019-08-30 20:21:46

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define deb(x) cout << '>' << #x << ':' << x << '\n';

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll a[n];
		for (ll i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		ll b[n];
		b[n - 1] = a[n - 1];
		//deb(b[n - 1]);
		for (ll i = n - 1 - 1; i >= 0; --i)
		{
			b[i] = min(b[i + 1], a[i]);
			//deb(i);
			//deb(b[i]);
		}
		ll count = 0;
		for (ll i = n - 1; i >= 0; --i)
		{
			if (a[i] > b[i])
				count++;
		}
		cout << count << '\n';
	}
	return 0;
}
