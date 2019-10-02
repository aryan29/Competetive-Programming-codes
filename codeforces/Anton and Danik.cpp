// Author: ishaang12
// Time: 2019-07-28 15:09:13

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll ca = 0, cd = 0;
	for (ll i = 0; i < s.length(); i++)
	{
		if (s[i] == 'A')
			ca++;
		else if (s[i] == 'D')
			cd++;
	}
	if (ca > cd)
		cout << "Anton";
	else if (cd > ca)
		cout << "Danik";
	else
	{
		cout << "Friendship";
	}

	return 0;
}
