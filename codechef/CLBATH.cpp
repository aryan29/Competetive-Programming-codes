#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        long long n, i, j, k, count = 1, v1, v2, v3, t1, t2, t3;
        cin >> v1 >> t1 >> v2 >> t2 >> v3 >> t3;
        long double x, y;

        x = (long double)(v3 * (t2 - t3)) / (t2 - t1);
        y = (long double)(v3 * (t3 - t1)) / (t2 - t1);
        if ((v3 <= (v1 + v2)) && (x <= v1) && (y <= v2) && (t3 <= t2) && (t3 >= t1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
