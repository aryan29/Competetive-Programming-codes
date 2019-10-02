// 19-06-2019 20:16:30
// @ishaang12
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll d;
    ll a[3];
    cin >> a[0] >> a[1] >> a[2] >> d;
    sort(a, a + 3);
    ll d1 = abs(a[1] - a[0]);
    ll d2 = abs(a[2] - a[1]);
    ll time = 0;
    if (d1 >= d && d2 >= d)
        time = 0;
    else
    {
        if (d1 < d && d2 < d)
        {
            time = abs(d1 - d) + abs(d2 - d);
        }
        else if (d1 < d && d2 >= d)
        {
            time = abs(d1 - d);
        }
        else if (d1 >= d && d2 < d)
        {
            time = abs(d2 - d);
        }
    }
    cout << time;
    return 0;
}