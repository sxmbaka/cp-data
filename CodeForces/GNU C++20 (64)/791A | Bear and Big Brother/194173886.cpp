#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fri(s, e) for (int i = s; i <= e; i++)
#define nl "\n"
#define mod 1000000007
void solve()
{
    int n, m, cnt = 0;
    cin >> n >> m;
    while (n <= m) {
        n*=3;
        m*=2;
        cnt++;
    }
    cout << cnt << nl;
 
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