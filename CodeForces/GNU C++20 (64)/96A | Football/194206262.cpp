#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(s, e) for (int i = s; i <= e; i++)
#define nl "\n"
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    if (s.size() < 7) {
        cout << "NO" << nl;
        return;
    }
    string a = "0000000", b = "1111111";
    bool flag = false;
    for (int i = 0; i < s.size() - 6; i++) {
        if (s.substr(i, 7) == a || s.substr(i, 7) == b) {
            flag = true;
        }
    }
    if (flag) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//#ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
//#endif
    ll test=1;
    // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}