// Author: ishaang12
// Time: 2019-08-23 14:16:43

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll d;
        cin >> d;
        cout << (d % 9) + 1 << '\n';
    }
    return 0;
}
