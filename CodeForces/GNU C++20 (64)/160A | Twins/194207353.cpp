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
    int arr[n];
    int totsum = 0, mysum = 0;
    fr(0, n - 1)
    {
        cin >> arr[i];
        totsum += arr[i];
    }
    sort(arr, arr + n);
    int cnt = 0, idx = n - 1;
    while (mysum <= totsum)
    {
        cnt++;
        totsum -= arr[idx];
        mysum += arr[idx];
        idx--;
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