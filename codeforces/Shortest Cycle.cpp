// Author: ishaang12
// Time: 2019-08-18 20:27:02

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> adj[200];
ll d[200][200];
ll ans;
ll nn;

void bfs(ll node)
{
	const int inf = 1000000;
	for (ll i = 0; i < nn; ++i)
	{
		d[node][i] = inf;
	}
	vector<ll> prv(nn, -1);
	d[node][node] = 0;

	queue<ll> q;
	q.push(node);
	while (!q.empty())
	{
		ll p = q.front();
		q.pop();
		for (auto i : adj[p])
		{
			if (d[node][i] == inf)
			{
				d[node][i] = d[node][p] + 1;
				prv[i] = p;
				q.push(i);
			}
			else
			{
				if (prv[p] == i)
					continue;
				ans = min(ans, d[node][p] + d[node][i] + 1);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, k;
	cin >> n;
	vector<ll> arr;
	for (ll i = 0; i < n; ++i)
	{
		cin >> k;
		if (k != 0)
			arr.push_back(k);
	}
	nn = arr.size();
	if (arr.size() > 128)
	{
		cout << 3 << '\n';
	}
	else
	{
		for (ll i = 0; i < arr.size(); ++i)
		{
			for (ll j = 0; j < arr.size(); ++j)
			{
				if (i == j)
					continue;
				if ((arr[i] & arr[j]) != 0)
				{
					//cout << arr[i] << " " << arr[j] << '\n';
					adj[i].push_back(j);
					//adj[j].push_back(i);
				}
			}
		}
		ans = 1000000;
		for (ll i = 0; i < arr.size(); ++i)
		{
			bfs(i);
		}
		if (ans == 1000000)
			cout << -1 << '\n';
		else
			cout << ans << '\n';
		return 0;
	}
}