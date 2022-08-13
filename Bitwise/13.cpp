// Jai Shree Ram
// Logic to left rotate bits in a number
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int a, r, x, y, p;
  cin >> a >> r;
  x = a << r;
  y = a >> (31 - r);
  if (a < 0 && r >= 1)
  {
    for (int i = 31, p = 31 - r; i >= 1, p > 0; i--)
    {
      y = y & (~(1 << i));
      p--;
    }
  }
  cout << "Left:" << (x | y);

  x = a >> r;
  if (a < 0 && r >= 1)
  {
    for (int i = 31, p = r; i >= 1, p > 0; i--)
    {
      x = x & (~(1 << i));
      p--;
    }
  }
  y = a << (31 - r);
  cout << "\nRight: " << (x | y);
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