// 09/06/2019 20:17:22
// @ishaang12
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll steps = 0;
        ll flag = 0;
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else if (n % 3 == 0)
            {
                n = (2 * n) / 3;
            }
            else if (n % 5 == 0)
            {
                n = (4 * n) / 5;
            }
            else
            {
                flag = 1;
                break;
            }
            steps++;
        }
        if (flag)
            cout << "-1" << '\n';
        else
        {
            cout << steps << '\n';
        }
    }
    return 0;
}