#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << 0 << endl;
            return;
        }
    }

    int mn = 1e9;

    for (int i = 0; i < n - 1; i++)
    {
        int x = abs(a[i + 1] - a[i]);
        mn = min(mn, x);
    }
    if (mn % 2 == 0)
    {
        cout << (mn + 2) / 2 << endl;
    }
    else
    {
        cout << (mn + 1) / 2 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
