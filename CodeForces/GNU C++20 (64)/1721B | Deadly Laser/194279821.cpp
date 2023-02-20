#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(s, e) for (int i = s; i <= e; i++)
#define nl "\n"
#define mod 1000000007
void solve()
{
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    if (sx + d >= n && sy + d >= m || sx - d <= 1 && sy - d <= 1) cout << -1 << nl;
    else if (sx + d >= n && sx - d <= 1 || sy + d >= m && sy - d <= 1) cout << -1 << nl;
    else cout << abs(n - 1) + abs(m - 1) << nl;
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
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}