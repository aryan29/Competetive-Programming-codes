// Author: ishaang12
// Time: 2019-09-21 12:35:02

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define DEB(x) cout << '>' << #x << ':' << x << '\n';

ll ix1, iy1, ix2, iy2, ix3, iy3, ix4, iy4;
ll rx1, ry1, rx2, ry2;

ll area(ll x1, ll y1, ll x2, ll y2)
{
	return (abs(y2 - y1) * abs(x2 - x1));
}

void FindPoints1(ll x1, ll y1, ll x2, ll y2,
				 ll x3, ll y3, ll x4, ll y4)
{
	ll x5 = max(x1, x3);
	ll y5 = max(y1, y3);

	ll x6 = min(x2, x4);
	ll y6 = min(y2, y4);

	if (x5 > x6 || y5 > y6)
	{
		ix1 = -1;
		iy1 = -1;
		ix2 = -1;
		iy2 = -1;

		return;
	}
	ix1 = x5;
	iy1 = y5;
	ix2 = x6;
	iy2 = y6;
}

void FindPoints2(ll x1, ll y1, ll x2, ll y2,
				 ll x3, ll y3, ll x4, ll y4)
{
	ll x5 = max(x1, x3);
	ll y5 = max(y1, y3);

	ll x6 = min(x2, x4);
	ll y6 = min(y2, y4);

	if (x5 > x6 || y5 > y6)
	{
		ix3 = -1;
		iy3 = -1;
		ix4 = -1;
		iy4 = -1;

		return;
	}
	ix3 = x5;
	iy3 = y5;
	ix4 = x6;
	iy4 = y6;
}
void FindPoints3(ll x1, ll y1, ll x2, ll y2,
				 ll x3, ll y3, ll x4, ll y4)
{
	ll x5 = max(x1, x3);
	ll y5 = max(y1, y3);
	ll x6 = min(x2, x4);
	ll y6 = min(y2, y4);

	if (x5 > x6 || y5 > y6)
	{
		rx1 = -1;
		ry1 = -1;
		rx2 = -1;
		ry2 = -1;

		return;
	}
	rx1 = x5;
	ry1 = y5;
	rx2 = x6;
	ry2 = y6;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll x1, x2, x3, x4, x5, x6, y1, y2, y3, y4, y5, y6;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;
	cin >> x5 >> y5 >> x6 >> y6;
	FindPoints1(x1, y1, x2, y2, x3, y3, x4, y4);
	FindPoints2(x1, y1, x2, y2, x5, y5, x6, y6);
	FindPoints3(ix1, iy1, ix2, iy2, ix3, iy3, ix4, iy4);
	ll area1 = area(ix1, iy1, ix2, iy2);
	ll area2 = area(ix3, iy3, ix4, iy4);
	ll area3 = area(rx1, ry1, rx2, ry2);
	ll areaog = area(x1, y1, x2, y2);
	if (area1 + area2 - area3 < areaog)
		cout << "YES";
	else
	{
		cout << "NO";
	}

	return 0;
}
