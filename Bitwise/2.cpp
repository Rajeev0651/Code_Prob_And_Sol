// Jai Shree Ram
//Write a C program to check Most Significant Bit (MSB) of a number is set or not.
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)
#define BITS sizeof(int) * 8

void solve()
{
    int a;
    cin >> a;
    cout << (a & (1 << (BITS - 1)));
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