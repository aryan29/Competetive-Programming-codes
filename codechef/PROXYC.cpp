#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll d;
        cin >> d;
        string s;
        cin >> s;
        ll apd = 0;
        ll ppd = 0;
        for (ll i = 0; i < d; ++i)
        {
            if (s[i] == 'P')
            {
                apd++;
            }
            else if (s[i] == 'A' && i > 1 && i < d - 2 && (s[i - 1] == 'P' || s[i - 2] == 'P') && (s[i + 1] == 'P' || s[i + 2] == 'P'))
            {
                ppd++;
            }
        }
        ll target = ceil(0.75 * d);
        ll diff = target - apd;
        if (diff > 0)
        {
            if (ppd >= diff)
            {
                cout << diff << '\n';
            }
            else
            {
                cout << "-1" << '\n';
            }
        }
        else
        {
            cout << '0' << '\n';
        }
    }
}
