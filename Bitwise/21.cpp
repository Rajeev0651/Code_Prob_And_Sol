// Jai Shree Ram
// Program to swap two bits of a byte
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a, n, m; // n and m are bit positions to swap
    cin >> a >> n >> m;
    int x = (a & (1 << n)) >> n;
    int y = (a & (1 << m)) >> m;
    a = a - (x * (pow(2, n))) - (y * (pow(2, m)));
    a = a + (y * pow(2, n)) + (x * (pow(2, m)));
    cout << a;
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