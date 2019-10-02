#include <iostream>

using namespace std;

int main()
{
    int t;
    int n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (((n * m) % 2) == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
