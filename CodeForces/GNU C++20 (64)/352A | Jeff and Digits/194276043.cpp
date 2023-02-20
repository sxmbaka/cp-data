#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(s, e) for (int i = s; i <= e; i++)
#define nl "\n"
#define mod 1000000007
void solve()
{
    int n, f = 0, z = 0;
    cin >> n;
    int arr[n];
    fr(0, n - 1)
    {
        cin >> arr[i];
        if (arr[i] == 5)
            f++;
        if (arr[i] == 0)
            z++;
    }
    f = f / 9;
    if (z == 0) {
        cout << -1 << nl;
    } else if (f == 0) {
        cout << 0 << nl;
    }
    else {
        fr(0, f - 1) cout << 555555555;
        fr(0, z - 1) cout << 0;
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