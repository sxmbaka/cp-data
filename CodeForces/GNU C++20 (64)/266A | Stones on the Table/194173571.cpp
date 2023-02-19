#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fri(s, e) for (int i = s; i <= e; i++)
#define nl "\n"
#define mod 1000000007
void solve()
{
    int n, m = 0;
    cin >> n;
    string s;
    cin >> s;
    fri(0, n - 1)
    {
        while (i < n - 1 && s[i] == s[i + 1])
        {
            i++;
            m++;
        }
    }
    cout << m;
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