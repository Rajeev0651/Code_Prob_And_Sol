//Jai Shree Ram
//Program to convert decimal to binary using bitwise operator
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a;
    cin>>a;
    int ans[32];
    for(int i=0; i<32; i++)
    {
        ans[i] = a & 1;
        a = a>>1;
    }
    for(int i=31; i>=0; i--)
        cout<<ans[i];
    bitset<32> bitset1{a};
    cout<<"\n"<<bitset1;
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