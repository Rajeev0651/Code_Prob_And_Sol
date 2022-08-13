// Jai Shree Ram
// Program to round off an integer number to the next lower multiple of 2
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a, b, index = 0, count = 0;
    cin >> a;
    b = a;
    for (int i = 0; i < 32; i++)
    {
        if (a & 1)
        {
            index = i;
            count++;
        }
        a >>= 1;
    }
    if (count == 1 && b > 2)
        cout << pow(2, index - 1);
    else if (b > 2)
        cout << pow(2, index);
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}