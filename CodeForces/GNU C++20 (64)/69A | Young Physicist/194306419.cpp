#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(s, e) for (int i = s; i <= e; i++)
#define nl "\n"
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int forces[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> forces[i][j];
        }
    }
    ll xs = 0, ys = 0, zs = 0;
    for (auto i : forces)
    {
        xs += i[0];
        ys += i[1];
        zs += i[2];
    }
    if (xs == 0 && ys == 0 && zs == 0)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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