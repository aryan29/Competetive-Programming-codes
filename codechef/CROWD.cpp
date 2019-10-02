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
ll result1[3][3] = {{1, 0, 0},
                    {0, 1, 0},
                    {0, 0, 1}};

ll dash(ll base, ll power)
{
    ll res = 1;
    if (base >= MOD)
    {
        base %= MOD;
    }
    while (power > 0)
    {
        if (power & 1)
        {
            res = (res * base) % MOD;
        }
        power = power >> 1;
        base = (base * base) % MOD;
    }
    return res;
}

void matrixmul(ll a[3][3], ll b[3][3])
{
    ll c[3][3];
    rep(i, 0, 3)
    {
        rep(j, 0, 3)
        {
            c[i][j] = 0;
            rep(k, 0, 3)
            {
                c[i][j] = (c[i][j] + (a[i][k] * b[k][j]) % MOD) % MOD;
            }
        }
    }
    rep(i, 0, 3)
    {
        rep(j, 0, 3)
        {
            a[i][j] = c[i][j];
        }
    }
}

void matrixexpo(ll a[3][3], ll n)
{
    ll id[3][3] = {{1, 1, 1},
                   {1, 0, 0},
                   {0, 1, 0}};

    while (n > 0)
    {
        if (n & 1)
        {
            matrixmul(a, id);
        }
        n = n >> 1;
        matrixmul(id, id);
    }
}

int main()
{
    fast;
    ////////////////////////////////////////////////////////////////////////////////////////////
    ll t;
    cin >> t;
    while (t--)
    {
        ll b[3][3] = {{1, 0, 0},
                      {0, 1, 0},
                      {0, 0, 1}};

        ll n;
        cin >> n;
        if (n < 3)
        {
            cout << "0" << endl;
        }
        else
        {
            ll a[3][3] = {{1, 1, 1},
                          {1, 0, 0},
                          {0, 1, 0}};

            matrixexpo(a, n - 3);
            ll ans = (4 * a[0][0]) + (2 * a[0][1]) + (1 * a[0][2]);
            //cout << ans << endl;
            ll fi = dash(2LL, n);
            //cout << fi << endl;
            ll final = (MOD + (fi % MOD) - (ans % MOD)) % MOD;
            cout << final << endl;
        }
    }
    ////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}
