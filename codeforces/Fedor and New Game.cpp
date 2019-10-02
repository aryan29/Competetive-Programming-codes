// Author: ishaang12
// Time: 2019-09-09 01:22:46

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define DEB(x) cout << '>' << #x << ':' << x << '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[m + 1];
    for (ll i = 0; i < m + 1; ++i)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 0; i < m; ++i)
    {
        if (__builtin_popcount(a[i] ^ a[m]) <= k)
            ans++;
    }
    cout << ans << '\n';

    return 0;
}