#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;

ll power(ll x, ll y, ll p)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (((res % p) * (x % p))) % p;
        y = y >> 1;
        x = (((x % p) * (x % p))) % p;
    }
    return res % p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        cout << ((power(2, (k - 1), MOD) % MOD) * (10 % MOD)) % MOD << '\n';
    }

    return 0;
}
