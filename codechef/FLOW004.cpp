#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int first = n;

        while (first >= 10)
        {
            first = first / 10;
        }
        int lastDigit = n % 10;

        cout << first + lastDigit << endl;
    }
}
