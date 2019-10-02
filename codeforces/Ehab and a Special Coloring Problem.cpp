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

bool prime[100005];

void sieve(int n)
{
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int main()
{
    fast;
    ////////////////////////////////////////////////////////////////////////////////////////////
    ll n;
    cin >> n;
    ll k = 1;
    ll ans[n + 1];
    sieve(n);
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i; j <= n; j = j + i)
                ans[j] = k;
            k++;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    ////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}