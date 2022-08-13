// Jai Shree Ram
// Program to reverse bits of a number
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a, b = 0, k = 31, j = 1;
    cin >> a;
    for (int i = 31; i >= 0; i--)
    {
        if (i >= 16)
        {
            b = b | ((a & (1 << i)) >> (k));
            k -= 2;
        }
        else
        {
            b = b | ((a & (1 << i)) << (j));
            j += 2;
        }
    }
    bitset<32> res = b;
    cout << res;
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