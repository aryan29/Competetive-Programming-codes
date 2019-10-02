/*
.___       .__                             ________              __          
|   | _____|  |__ _____  _____    ____    /  _____/ __ _________/  |______   
|   |/  ___/  |   \__  \ \__  \  /    \  /   \  ___|  |  \____ \   __\__  \  
|   |\___ \|   Y  \/ __ \_/ __ \|   |  \ \    \_\  \  |  /  |_> >  |  / __ \_
|___/____  >___|  (____  (____  /___|  /  \______  /____/|   __/|__| (____  /
         \/     \/     \/     \/     \/          \/      |__|             \/ 
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rrep(i, a, b) for (ll i = a; i > b; --i)

// unsigned nChoosek(unsigned n, unsigned k)
// {
//     if (k > n)
//         return 0;
//     if (k * 2 > n)
//         k = n - k;
//     if (k == 0)
//         return 1;

//     int result = n;
//     for (int i = 2; i <= k; ++i)
//     {
//         result *= (n - i + 1);
//         result /= i;
//     }
//     return result;
// }

int main()
{
    fast;
    ////////////////////////////////////////////////////////////////////////////////////////////
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << (n * (n - 1)) / 2 << endl;
    }
    ////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}
