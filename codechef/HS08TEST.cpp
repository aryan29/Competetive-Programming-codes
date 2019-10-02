#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    float num;
    cin >> i;
    cin >> num;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    if (i % 5 == 0)
    {
        if ((i + 0.50) <= num)
        {
            cout << num - i - 0.50;
        }
        else
            cout << num;
    }
    else
    {
        cout << num;
    }
}
