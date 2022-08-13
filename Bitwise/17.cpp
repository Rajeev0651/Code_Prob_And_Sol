// Jai Shree Ram
// Russian peasant multiplication algorithm
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a, b, res = 0;
    cin >> a >> b;
    while (b > 0)
    {
        if (b % 2 == 1)
            res += a;
        a = a << 1;
        b = b >> 1;
    }
    cout<<res;
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