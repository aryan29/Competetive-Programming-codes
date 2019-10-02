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
	string s;
	cin >> s;
	ll count = 0;
	for (ll i = 0; i < n - 1; i = i + 2)
	{
		if (s[i] == 'a' && s[i + 1] == 'a')
		{
			count++;
			s[i] = 'b';
		}
		if (s[i] == 'b' && s[i + 1] == 'b')
		{
			count++;
			s[i] = 'a';
		}
	}
	cout << count << '\n';
	cout << s << '\n';

	return 0;
}
