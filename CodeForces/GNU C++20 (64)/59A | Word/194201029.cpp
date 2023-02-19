#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fri(s, e) for (int i = s; i <= e; i++)
#define nl "\n"
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    int sm = 0, c = 0;
    for (auto i : s)
    {
        if (i >= 97 && i <= 122)
            sm++;
        else
            c++;
    }
    if (c <= sm)
    {
        for (int i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
            s[i] = toupper(s[i]);
    }
    cout << s << nl;
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