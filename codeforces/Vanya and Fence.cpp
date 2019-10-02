// Author: ishaang12
// Time: 2019-07-28 15:02:54

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, h;
	ll width = 0;
	cin >> n >> h;
	for (ll i = 0; i < n; i++)
	{
		ll tmp;
		cin >> tmp;
		if (tmp > h)
			width += 2;
		else
		{
			width++;
		}
	}
	cout << width;

	return 0;
}
