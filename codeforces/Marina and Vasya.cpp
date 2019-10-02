// 21-06-2019 22:07:52
// @ishaang12
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

char another(char x, char y)
{
    for (char r = 'a'; r <= 'z'; ++r)
        if (x != r && y != r)
            return r;
    return 'z';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, t;
    cin >> n >> t;
    string a, b;
    cin >> a >> b;
    vector<ll> same, different;
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] == b[i])
            same.push_back(i);
        else
            different.push_back(i);
    }
    string out;
    out.resize(n);
    for (ll i = 0; i < n; ++i)
        out[i] = another(a[i], b[i]);
    while (t < n)
    {
        if (same.size() >= 1)
        {
            const ll i = same.back();
            same.pop_back();
            out[i] = a[i];
            ++t;
        }
        else if (different.size() >= 2)
        {
            const ll i = different.back();
            different.pop_back();
            const ll j = different.back();
            different.pop_back();
            out[i] = a[i];
            out[j] = b[j];
            ++t;
        }
        else
        {
            cout << "-1" << '\n';
            return 0;
        }
    }

    cout << out << '\n';
}