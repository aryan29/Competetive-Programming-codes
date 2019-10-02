#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sod = 0;
        ll temp = n;
        while (temp != 0)
        {
            sod += temp % 10;
            temp = temp / 10;
        }
        cout << ((n * 10) + (10 - (sod % 10)) % 10) << '\n';
    }
}
