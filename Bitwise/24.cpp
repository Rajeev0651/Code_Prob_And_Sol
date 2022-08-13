// Jai Shree Ram
// Program to check whether a given number is palindrome or not in binary form
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a;
    cin >> a;
    bitset<8> val = a;
    cout << val << "\n";
    for (int i = 0; i <= 4; i++)
    {
        if (val[i] != val[7 - i])
        {
            cout << "Not palindrome";
            return;
        }
    }
    cout << "Palindrome";
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