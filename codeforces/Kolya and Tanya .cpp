// Author: Ishaan Gupta
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vll = std::vector<ll>;
using pll = std::pair<ll, ll>;
using vvll = std::vector<vll>;
using vpll = std::vector<pll>;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define rrep(i, a, b) for (ll i = a; i > b; --i)
#define max3(a, b, c) max(a, max(b, c))
#define cres(c, n) (c).clear(), (c).resize(n)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define cntll(a) __builtin_popcountll((a))
#define ff first
#define ss second
#define flush cout.flush()
#define mk make_pair
const ll MOD = 1e9 + 7;

ll dash(ll base, ll power)
{
    ll res = 1;
    while (power > 0)
    {
        if (power & 1)
            res = (res * base) % MOD;
        power = power >> 1;
        base = (base * base) % MOD;
    }
    return res;
}

int main()
{
    fast;
    ////////////////////////////////////////////////////////////////////////////////////////////
    ll n;
    cin >> n;
    ll ans = (MOD + dash(3, 3 * n) - dash(7, n)) % MOD;
    cout << ans;
    ////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}