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
#define ff first
#define ss second
#define flush cout.flush()
#define mk make_pair
const ll MOD = 1e9 + 7;

int main()
{
    fast;
    ////////////////////////////////////////////////////////////////////////////////////////////
    ll n;
    cin >> n;
    ll a[n];
    ll even = 0;
    ll odd = 0;
    rep(i, 0, n)
    {
        cin >> a[i];
        if (a[i] & 1)
            odd++;
        else
            even++;
    }
    if (even && odd)
    {
        sort(a, a + n);
        rep(i, 0, n)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        rep(i, 0, n)
        {
            cout << a[i] << " ";
        }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}