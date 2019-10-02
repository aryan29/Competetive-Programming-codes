// Author: ishaang12
// Time: 2019-09-21 10:21:39

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define DEB(x) cout << '>' << #x << ':' << x << '\n';

ll dp[4010];
ll a, b, c;

ll fun(ll n)
{
	if (n == 0)
		return 0;
	if (n < 0)
		return -INT_MAX + 1;
	if (dp[n] > -INT_MAX)
		return dp[n];
	dp[n] = max(dp[n], max(1 + fun(n - a), max(1 + fun(n - b), 1 + fun(n - c))));
	return dp[n];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin >> n >> a >> b >> c;
	for (ll i = 0; i < 4010; ++i)
	{
		dp[i] = -INT_MAX;
	}

	cout << fun(n);

	return 0;
}
