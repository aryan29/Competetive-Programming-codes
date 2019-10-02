#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;
typedef std::pair<ll, ll> pll;
typedef std::vector<vll> vvll;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rrep(i, a, b) for (ll i = a; i > b; --i)
#define max3(a, b, c) max(a, max(b, c))
#define cres(c, n) (c).clear(), (c).resize(n)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ff first
#define ss second
#define mk make_pair

int main()
{
    fast;
    ///////////////////////////////////////////////////////////////////////////////////////////////
    ll n;
    cin >> n;
    ll left = 0;
    ll right = 0;
    ll temp[n];
    ll count = 0;
    rep(i, 0, n)
    {
        cin >> temp[i];
    }
    rep(i, 0, n)
    {
        if (temp[i] == 0)
            left++;
        else
            right++;
    }
    rep(i, 0, n)
    {
        if (temp[i] == 0)
        {
            left--;
            count++;
        }
        else
        {
            right--;
            count++;
        }

        if (left == 0 || right == 0)
            break;
    }
    cout << count;
    ///////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}