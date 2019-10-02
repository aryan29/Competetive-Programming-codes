#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rrep(i, a, b) for (ll i = a; i > b; --i)

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k,v;
        cin >> n >> k >> v;
        ll a[n]={0};
        ll sum = 0;
        rep(i,0,n)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll x;
        x = (v*(n+k) - sum);
        if (x > 0 && (x % k == 0))
        {
            cout << (x / k) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
        
        

    }
    return 0;
}
