// Author: ishaang12
// Time: 2019-07-28 15:26:41

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	ll i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cin >> t;
			if (t == 1)
				break;
		}
		if (t == 1)
			break;
	}
	// cout << i << '\n'
	// 	 << j << '\n';
	cout << abs(i - 2) + abs(j - 2);

	return 0;
}
