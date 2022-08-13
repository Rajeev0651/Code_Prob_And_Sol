// Jai Shree Ram
// Program to find the next number power of 2
#include <bits/stdc++.h>
using namespace std;

#define l long 
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a, index = -1;
    cin >> a;
    for (int i = 0; i < 32; i++)
    {
        if (a & 1)
            index = i;
        a >>= 1;
    }
    cout << pow(2, index + 1);
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