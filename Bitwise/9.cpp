// Jai Shree Ram
// Logic to count trailing zeros in a binary number
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a, count = 0;
    cin >> a;
    for (int i = 0; i < 32; i++)
    {
        if ((1 & (a >> i)) == 0)
            count++;
        else
            break;
    }
    cout << count;
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