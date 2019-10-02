// Author: ishaang12
// Time: 2019-07-21 21:38:28

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s, r;
        cin >> s >> r;
        ll s0 = 0, s1 = 0, r0 = 0, r1 = 0;
        for (ll i = 0; i < n; ++i)
        {
            if (s[i] == '1')
                s1++;
            else
            {
                s0++;
            }
            if (r[i] == '1')
                r1++;
            else
            {
                r0++;
            }
        }
        if (s0 == r0 && s1 == r1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
