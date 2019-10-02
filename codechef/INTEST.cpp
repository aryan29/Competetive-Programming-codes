#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    long long int t, k, count = 0;
    cin >> t >> k;
    long long int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        if (a[i] % k == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}

