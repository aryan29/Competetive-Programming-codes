#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int count = 0;
        cin >> n;
        char a[n];
        cin >> a;
        if (n == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            if (a[0] == '0' && a[1] == '0')
            {
                count++;
                a[0] = '1';
            }

            if (a[n - 1] == '0' && a[n - 2] == '0')
            {
                count++;
                a[n - 1] = '1';
            }

            for (int i = 1; i <= (n - 4); i++)
            {
                if (a[i] == '0' && a[i + 1] == '0' && a[i + 2] == '0')
                {
                    count++;
                    a[i + 1] = '1';
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}
