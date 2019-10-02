// Author: ishaang12
// Time: 2019-07-28 15:18:12

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	ll a[n] = {0};
	for (ll i = 0; i < n; i++)
	{
		ll t1, t2, t3;
		cin >> t1 >> t2 >> t3;
		if (t1)
			a[i]++;
		if (t2)
			a[i]++;
		if (t3)
			a[i]++;
	}
	ll count = 0;
	for (ll i = 0; i < n; i++)
	{
		//cout << a[i] << " ";
		if (a[i] >= 2)
			count++;
	}
	cout << count;

	return 0;
}
