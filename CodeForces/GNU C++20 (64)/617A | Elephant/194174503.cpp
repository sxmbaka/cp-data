#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fri(s, e) for (int i = s; i <= e; i++)
#define nl "\n"
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    cout << n / 5 + ((n % 5 != 0)? 1 : 0) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}