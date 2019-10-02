// Author: ishaang12
// Time: 2019-09-05 21:15:33

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
	ll ans;
	while (t--)
	{
		ll str, it, exp;
		cin >> str >> it >> exp;
		if (str + exp <= it)
			ans = 0;
		else if ((str + exp - it) % 2 == 0)
			ans = (str + exp - it) / 2;
		else if ((str + exp - it) % 2 == 1)
			ans = (str + exp - it) / 2 + 1;
		cout << min(max(ans, 0ll), exp + 1) << '\n';
	}
	return 0;
}