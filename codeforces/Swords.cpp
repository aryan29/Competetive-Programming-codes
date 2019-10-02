// Author: ishaang12
// Time: 2019-09-21 12:35:02

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define DEB(x) cout << '>' << #x << ':' << x << '\n';

ll gcd(ll a, ll b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
ll findGCD(ll arr[], ll n)
{
	ll result = arr[0];
	for (ll i = 1; i < n; i++)
		result = gcd(arr[i], result);

	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin >> n;
	ll a[n];
	ll ma = 0;
	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i];
		//ma = max(ma, a[i]);
		// if (a[i] > ma)
		// {
		// 	ma = a[i];
		// 	index = i;
		// }
	}
	sort(a, a + n);
	ma = a[n - 1];

	//a[index] = 1;
	// for (ll i = 0; i < n - 1; ++i)
	// {
	// 	DEB(a[i]);
	// }
	if (n == 2)
	{
		cout << 1 << " " << ma - a[0];
		return 0;
	}
	//ll gc = findGCD(a, n - 1);
	ll diff[n - 1];
	for (ll i = 0; i < n - 1; ++i)
	{
		diff[i] = ma - a[i];
	}
	ll gc = findGCD(diff, n - 1);
	ll ans = 0;
	for (ll i = 0; i < n - 1; ++i)
	{
		ans += diff[i] / gc;
	}
	cout << ans << " " << gc;

	return 0;
}
