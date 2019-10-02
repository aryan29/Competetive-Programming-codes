#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, t, x, y, z, m, h, w, b, c, i, j, k, p, q;
    cin >> w >> h;
    c = 0;
    x = 0;
    char a[w][h];
    for (i = 0; i < w; i++)
    {
        for (j = 0; j < h; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '*')
                c++;
        }
    }
    for (i = 1; i < w; i++)
    {
        for (j = 1; j < h; j++)
        {
            p = i;
            q = j;
            if (a[i][j] == '*')
            {
                if (a[i - 1][j] == '*' && a[i + 1][j] == '*' && a[i][j - 1] == '*' && a[i][j + 1] == '*')
                {
                    while (p >= 1 && a[p - 1][q] == '*')
                    {
                        x++;
                        p--;
                        c--;
                    }
                    p = i;
                    q = j;
                    while (p < w - 1 && a[p + 1][q] == '*')
                    {
                        x++;
                        p++;
                        c--;
                    }

                    p = i;
                    q = j;
                    while (q >= 1 && a[p][q - 1] == '*')
                    {
                        x++;
                        q--;
                        c--;
                    }

                    p = i;
                    q = j;
                    while (q < h - 1 && a[p][q + 1] == '*')
                    {
                        x++;
                        q++;
                        c--;
                    }

                    if (c == 1)
                    {
                        cout << "YES";
                        return 0;
                    }
                    else
                    {
                        cout << "NO";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO";

    return 0;
}