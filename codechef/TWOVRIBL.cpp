// Author: ishaang12
// Time: 2019-07-21 23:43:41

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
        ll xf;
        cin >> xf;
        ll x = 0, y = 0;
        ll temp = 1;
        ll step = 0;
        while (y < xf * xf)
        {
            if (temp * temp > y)
            {
                x = temp;
                y = y + (temp * temp);
                step++;
                //cout << x << " " << y << " " << step << '\n';
                temp++;
            }
            else
            {
                temp = ceil(sqrt(y));
            }
            //temp++;
        }
        cout << step << '\n';
    }
    return 0;
}
