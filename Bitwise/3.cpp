//Jai Shree Ram
//Program to get nth bit of a number
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int n, a;
    cin>>n>>a;
    cout<<((n & (1<<(a)))>>a);
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