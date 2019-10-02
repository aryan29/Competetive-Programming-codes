#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
const ll maxn = 1ll << 32;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v;
    v.push_back(1);
    ll ans = 0;
    string s;
    while (n--)
    {
        cin >> s;
        if (s == "for")
        {
            ll x;
            cin >> x;
            v.push_back(min(v.back() * x, maxn));
        }
        if (s == "end")
        {
            v.pop_back();
        }
        if (s == "add")
        {
            ans = min(maxn, ans + v.back());
        }
    }
    if (ans == maxn)
        cout << "OVERFLOW!!!";
    else
        cout << ans;
}