// Author: ishaang12
// Time: 2019-07-21 22:00:37

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
        string s;
        cin >> s;
        ll c0[100010] = {0};
        ll c1[100010] = {0};
        ll count0 = 0;
        ll count1 = 0;
        for (ll i = 0; i < s.length(); ++i)
        {
            if (s[i] == '0')
            {
                c0[i] = c0[i - 1] + 1;
                c1[i] = c1[i - 1];
                count0++;
            }
            else
            {
                c1[i] = c1[i - 1] + 1;
                c0[i] = c0[i - 1];
                count1++;
            }
        }
        // for (ll i = 0; i < s.length(); ++i)
        // {
        //     cout << c0[i] << " " << c1[i] << '\n';
        // }
        ll ans = 0;

        ll k = min((ll)sqrt(count0), count1);

        for (ll i = 1; i <= k; ++i)
        {
            ll req0 = i * i;
            ll req1 = i;
            ll range = req0 + req1 - 1;
            for (ll j = 0; j < s.length(); j++)
            {
                ll range0 = c0[range + j] - c0[j - 1];
                ll range1 = c1[range + j] - c1[j - 1];
                if (range0 == req0 && range1 == req1)
                    ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
