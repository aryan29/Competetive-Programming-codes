// Author: ishaang12
// Time: 2019-07-28 15:14:31

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll a, b;
	cin >> a >> b;
	ll n = 0;
	while (a <= b)
	{
		a = a * 3;
		b = b * 2;
		n++;
	}
	cout << n;

	return 0;
}
