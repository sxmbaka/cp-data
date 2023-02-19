#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fri(s, e) for (int i = s; i <= e; i++)
#define frd(s, e) for (int i = s; i >= e; i--)
#define nl "\n"
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    int arr[n];
    fri(0, n - 1)
    {
        cin >> arr[i];
    }
    bool flag = false;
    ll start = -1, end = -1;
    fri(0, n - 2)
    {
        if (arr[i] > arr[i + 1])
        {
            start = i;
            break;
        }
    }
    frd(n - 1, 0)
    {
        if (arr[i] < arr[i - 1])
        {
            end = i;
            break;
        }
    }
    if (start == -1 && end == -1)
    {
        cout << "yes" << nl;
        cout << 1 << " " << 1 << nl;
    }
    else
    {
        reverse(arr + start, arr + end + 1);
        bool sorted = 1;
        fri(0, n - 2)
        {
            if (arr[i] > arr[i + 1])
            {
                sorted = 0;
                break;
            }
        }
        if (sorted)
        {
            cout << "yes" << nl;
            cout << start + 1 << " " << end + 1 << nl;
        }
        else
        {
            cout << "no" << endl;
        }
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