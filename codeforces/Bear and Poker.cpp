// 18-06-2019 00:34:52
// @ishaang12
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        while (a[i] % 2 == 0)
            a[i] /= 2;
        while (a[i] % 3 == 0)
            a[i] /= 3;
    }
    sort(a, a + n);
    if (a[0] == a[n - 1])
        cout << "Yes";
    else
        cout << "No";

    return 0;
}