// Jai Shree Ram
// Logic to count zeros and ones in a binary number
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int one = 0, zero = 0, a;
    cin >> a;
    for (int i = 0; i < 32; i++)
    {
        if (((a >> i) & 1) == 0)
            zero++;
        else
            one++;
    }
    cout<<"Zero: "<<zero<<"\n"<<"One: "<<one;
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