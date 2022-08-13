// Jai Shree Ram
// Program to count the number of bits to be flipped to convert a number to another number
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a, b, res = 0;
    cin>>a>>b;
    bitset<32> x = a;
    bitset<32> y = b;
    for (int i = 0; i < 32; i++)
    {
        if (x[i] != y[i])
            res++;
    }
    cout << res<<"\n";
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