// Author: ishaang12
// Time: 2019-09-30 16:45:36

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define DEB(x) cout << '>' << #x << ':' << x << '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll flag = 1;
        ll har[200] = {0};
        string s, r;
        cin >> s >> r;
        for (ll i = 0; i < r.length(); ++i)
        {
            har[r[i]]++;
        }
        // for (ll i = 'a'; i <= 'z'; ++i)
        // {
        //     cout << i << " " << har[i] << '\n';
        // }

        for (ll i = 0; i < s.length(); ++i)
        {
            har[s[i]]--;
        }
        // for (ll i = 'a'; i <= 'z'; ++i)
        // {
        //     cout << i << " " << har[i] << '\n';
        // }

        for (ll i = 'a'; i <= 'z'; ++i)
        {
            if (har[i] < 0)
            {
                cout << "Impossible" << '\n';
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            continue;

        // for (ll i = 0; i < s.length(); ++i)
        // {
        //     har[s[i] - 'a'] = har[s[i] - 'a'] - has[s[i] - 'a'];
        //     DEB(har[s[i] - 'a']);
        // }
        string res = "";
        for (ll i = 'a'; i < s[0]; ++i)
        {
            while (har[i] > 0)
            {
                //DEB("here");
                res += (char)i;
                har[i]--;
            }
        }
        //DEB(res);

        ll f = s[0];
        //DEB(f);
        //DEB(s);
        for (ll i = 0; i < s.size(); ++i)
        {
            if (s[i] > s[0])
            {
                //DEB("here1");
                break;
            }
            if (s[i] < s[0])
            {
                //DEB("here2");
                res += s;
                s.clear();
                break;
            }
        }
        //  DEB(res);
        //  DEB(har[f]);
        while (har[f] > 0)
        {
            // DEB("here");
            res += (char)f;
            har[f]--;
        }
        // DEB(res);
        res += s;
        //   DEB(res);

        for (ll i = 'a'; i <= 'z'; ++i)
            while (har[i] > 0)
            {
                res.push_back(char(i));
                har[i]--;
            }

        cout << res << '\n';
    }
    return 0;
}
