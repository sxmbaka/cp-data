#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(s, e) for (int i = s; i <= e; i++)
#define nl "\n"
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    if (n < 6 || n & 1) {
        cout << 0 << nl;
    } else {
        n /= 2;
        n -= 1;
        n /= 2;
        cout << n << nl;
    }
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
    // cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
 